#include "game.h"

// 定义分隔符常量（78个-）
#define SEP "------------------------------------------------------------------------------"

#define COL 78               // 游戏界面总宽度
#define MARGIN_X 10          // 左边距
#define MAP_START_Y 3        // 地图开始的Y坐标
#define MAP_END_Y 11         // 地图结束的Y坐标
#define INFO_START_Y 12      // 信息开始的Y坐标
#define INFO_END_Y 19        // 信息结束的Y坐标
#define MAINMENU_START_Y 20  // 主菜单开始的Y坐标

// 定义玩家数组
Player players[] = {
	{9527, "唐伯虎", "bohu.tang", 100, 3, 1, 10000, 5000, 900000, 1000000, .coord.X = 3, .coord.Y = 1},
	{9528, "祝枝山", "zhishan.zhu", 100, 3, 1, 10000, 5000, 900000, 1000000, .coord.X = 2, .coord.Y = 0}
};

// 定义江湖门派数组
Martial martials[20] ={
	{1, "少林派", "正派", .hq_coord.X=4, .hq_coord.Y=1, 1, "中华武学的泰斗，明末，少林众多的人才中，以悟空和箭神二人排为一等。其中，悟空出家为僧，箭神乃俗家弟子。当时江湖人称少林双绝。少林寺中众僧在两大长老的带领下参加了江浙沿海抗击倭寇的战斗，在各路应募兵马中表现得最为骁勇。但正因抗倭之事，也使江湖中的众多门派产生了矛盾，其中首推少林和日月神教。悟空、箭神曾几度带领江湖同仁攻上光明顶，但由于日月神教和血河两派结为同盟，更何况邪派中高手如云，所以几次围剿未果而终，黑白两道都损失惨重"},
	{2, "武当派", "正派", .hq_coord.X=4, .hq_coord.Y=3, 1, "武当在江湖上与少林齐名，有‘北崇少林’‘南尊武当’之说。 武当新一代的首领人物，是一位谦谦君子，一张轮廓分明的脸上总是带着爽朗的笑容，就连他的仇敌都不能不承认他是条少见的男子汉。凡人从十八岁崛起江湖，身经大小三十三战，至今从未败过一次。凡人一生中最不能忍受的两件事就是失败和错误。 "},
	{3, "丐帮", "正派", .hq_coord.X=6, .hq_coord.Y=2, 1, "丐帮是中原武林中人数最为众多的一个门派，也是天下第一大帮派，以遍布天下乞丐的乞丐组成，分为污衣帮和净衣帮。丐帮中人大多都是社会地位比较低的人，但他们各个铮铮硬骨，品格高尚，很少出现卑劣之人。丐帮新一代众多弟子以天葵为首，除暴安良、行侠丈义、抑强扶弱，所作所为为天下人所津津乐道。"},
	{4, "全真教", "正派", .hq_coord.X=3, .hq_coord.Y=2, 1, "全真属于道教的分支之一。现今全真教中最有权威的人是一个瘦瘦小小的人，长着一双冷冷淡淡好象永远不会有什么变化的眼睛，看起来仿佛是灰色的。但他又是一个非常讲究的人，他喜欢紫色，喜欢名马佳人华衣美酒，喜欢享受。对每一件事情他都非常的挑剔，做的每一件事都经过精密计划，绝不肯多浪费一分力气，也不会有一点疏忽。这就是全真海雅。"},
	{5, "五岳剑派", "正派", .hq_coord.X=3, .hq_coord.Y=1, 1, "泰山派，恒山派，衡山派，华山派，嵩山派结为同气枝连的的五岳剑派，在江湖上扬名立万。五派中人一向面和心不和，所以五派的式微不是由于外敌入侵，而纯粹是内部矛盾激化走向内耗的结果，内部的勾心斗角虽然常常以抗倭为借口出现，实则是为了掌握五岳生杀大权。"},
	{6, "四川唐门", "正派", .hq_coord.X=2, .hq_coord.Y=2, 1, "唐门在江湖上以暗器闻名。但自从唐门的唐老太太过世后唐家堡一度家道中落，加之唐甜为称霸武林挑起纷争，又使唐门陷入了再度的浩劫，几乎一蹶不振。在这种危难的时刻唐门出现了一群新生力量：唐纾、唐斩、唐缺、唐玉。他们整顿内务，肃清奸佞，打出了匡复武林正义的旗帜，并且在江湖上行侠仗义，挽回了唐门的声誉，使唐门成为了江湖上的名门正派。"},
	{7, "大理段氏", "正派", .hq_coord.X=1, .hq_coord.Y=5, 1, "大理段氏人丁众多，高手如云。其中有一位名扬江湖顶尖女侠——香雪儿。香雪儿面相灵秀，肤色白皙，但微显瘦弱，看上去弱不禁风却身怀绝世武功，已深得大理武功心得。"},
	{8, "天山派", "正派", .hq_coord.X=0, .hq_coord.Y=0, 1, "天山派是名门正派，也是目前江湖中最为团结的一个门派。天山派也是江湖中女弟子最为众多的一个门派，且各个武功造诣不凡，相貌清秀。"},
	{9, "古墓派", "正派", .hq_coord.X=3, .hq_coord.Y=3, 1, "古墓派这一代的传人名叫暄雯，是一女子，来历不明。暄雯生性娴静，长相俊美，举止飘逸，但做事情却不似师祖小龙女，倒颇有一点杨过的风格，武功修为深不可测，同样喜穿白衣。此派轻功卓越，剑法、拳法灵动妙绝，更是全真教的克星。古墓传人的处世原则是“事不关己，高高挂起”，过着与世无争的日子，但是如果有人冒犯了古墓传人，那他一定会死得很惨。"},
	{10, "名捕门", "正派", .hq_coord.X=5, .hq_coord.Y=1, 1, "名捕门历属与官府，但其中也不乏在江湖上闯出名堂的武林高手。名捕门一等一的人才中有一位绰号叫‘惊天泣鬼’的，此人从不以真面目视人，总是在幕后策划一些事情。"},
	{11, "日月神教", "邪派", .hq_coord.X=1, .hq_coord.Y=6, 1, "由于该教高手众多，并彼此互不相服，所以教务混杂。教中弟子多为邪恶之徒，专与名门正派作对，杀人良多，罪恶昭彰，故被江湖正派之人贬为魔教。"},
	{12, "权力帮", "邪派", .hq_coord.X=6, .hq_coord.Y=6, 1, "邪派之一，目前派中最高首脑为一叫阿飞的年轻人。阿飞，一个表面上异常忧悒的人。没有与其交过手的武林高手，无法想象他那弱不禁风的身躯隐藏着那么大的潜力，更不能想象他是如何用支撑起权利帮的担子的。"},
	{13, "五毒教", "邪派", .hq_coord.X=0, .hq_coord.Y=2, 1, "一个以使毒为专长的门派，派中人各个都是用毒高手。此派高手人称梦魇，其人使毒已入化境，令人难以琢磨，江湖同道对其莫不绕道而行。此人品行时好时坏，但坚韧卓绝，嗜武成痴。"},
	{14, "神龙教", "邪派", .hq_coord.X=7, .hq_coord.Y=2, 1, "神龙教是江湖邪派，由于教址远离中原，所以不大干预中原武林的血腥杀戮。目前神龙教有两位高手一为刀神，此人武功高深莫测，性格孤僻冷傲，不喜与人接近。二为恶龙，武功高强但脾气暴躁，做事没有耐性。"},
	{15, "青龙会", "邪派", .hq_coord.X=6, .hq_coord.Y=5, 1, "江湖上绵延数百年的一个神秘组织。青龙会下分十二堂，分别以月为代号。"},
	{16, "桃花岛", "亦正亦邪", .hq_coord.X=7, .hq_coord.Y=4, 1, "自从东邪黄药师扬名立万于此后，他的传人就在这里绵延不绝，竟将桃花岛建成了门派的总舵。桃花岛黄药师的关门弟子程英一生未嫁，在岛上收了几个徒弟，桃花岛的武功因此得到延续和发扬。"},
	{17, "锦衣卫", "亦正亦邪", .hq_coord.X=5, .hq_coord.Y=3, 1, "大内锦衣卫中人才济济，尤其是雷神，此人野心勃勃，自幼练得一身大力金刚功，号称刀枪不入，武功实是深不可测。而且为人机智，精通兵法，行兵时能将千军万马人使得如同数十万般威力十足。"},
	{18, "血河派", "亦正亦邪", .hq_coord.X=4, .hq_coord.Y=2, 1, "自从血河派的掌门一代大侠方歌吟飘然而去后，血河派日益衰落。血河派活动的范围也越来越少，基本上只限与龙门石窟。而江湖上的九大门派已经把血河派视为邪魔歪道。并已传出英雄令，只要九大门派的门人遇上血河派的人，一律格杀无论。在江湖上已经没有什么血河派的人在行走。除了无恨！没有人知道他来自何方，人们只知道他来自血河派。没有人知道他的武功有多高，因为看见他的剑的人都已经......无恨是武林中的一个谜，现隐居在天山，相传是为了一名叫若寒的女子。相传血河弟子花无缺已深得无恨真传，在无恨隐居江湖期间代理血河的一切帮中事务。花无缺为人善良真诚，在江湖上人缘甚好，并将血河派内外事务打理得井井有条。"},
	{19, "通通吃", "亦正亦邪", .hq_coord.X=3, .hq_coord.Y=7, 1, "江湖上一个神秘的门派，创始人，武功不祥。总舵设在通吃岛，教中首领人物——辉翰。此人手段严酷，以威服人。平常不轻易踏足中原武林，潜心修炼武功。"},
	{20, "玩偶山庄", "亦正亦邪", .hq_coord.X=6, .hq_coord.Y=0, 1, "江湖上一个神秘的门派，创始人，武功不祥。总舵就在玩偶山庄，教中首领人物——阳光。玩偶山庄门人众多，但大都绝迹江湖，只有阳光经常独自浪迹江湖并闯出了名堂，所以武林中人才知有这么一个门派存在。"}
};

// 定义怪物数组
Monster monster_array[] = {
	{1, "海绵宝宝", 1, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{2, "五百强凤姐", 2, 200, 8, 2, 5, 10, 5, 1, {0, 0}},
	{3, "地狱男爵", 9, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{4, "恶魔小七", 8, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{5, "猩红小月亮", 7, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{6, "海阔天空鸟", 6, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{7, "老夫子", 5, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{8, "老夫子", 9, 100, 5, 2, 5, 10, 5, 1, {0, 1}}
};

// 定义道具数组
Prop prop_array[] = {
	{1, "帝皇天烈剑", 1, 5, 5000, weapon, .min_attack=1, .max_attack=4, "上古三皇五帝用过的宝剑！"},
	{2, "荆棘之甲", 2, 5, 10000, armor, .min_defense=2, .max_defense=6, "取日月之精华，反弹伤害！"},
	{3, "玉液琼浆", 3, 5, 15000, consumables, .min_power=100, .max_power=500, "蟠桃会上的御用饮品，玉母娘娘都说好！"},
	{4, "帝皇天烈剑", 1, 5, 5000, weapon, .min_attack=1, .max_attack=4, "上古三皇五帝用过的宝剑！"},
	{5, "荆棘之甲", 2, 5, 10000, armor, .min_defense=2, .max_defense=6, "取日月之精华，反弹伤害！"},
	{6, "玉液琼浆", 3, 5, 15000, consumables, .min_power=100, .max_power=500, "蟠桃会上的御用饮品，玉母娘娘都说好！"}
};

// 定义地图数组 - 64张地图
Map map_array[8][8] = {
	{
		{1, "天山", 1, {0, 0}, "据《穆天子传》记载，3000年前的周朝穆王曾乘坐\"八骏马车\"西行天山，西王母在天池接见了他。穆王赠送大批锦绸美绢等中原特产，西王母则回赠了天山的奇珍瑰宝，并邀请穆王游览天山名胜。穆王亲书\"西王母之山\"，留作纪念。临别时，西王母劝饮再三，即席歌曰:\"祝君长寿，愿君再来。\""},
		{2, "楼兰", 1, {1, 0}, "东通敦煌，西北到焉耆、尉犁，西南到若羌、且末。古代“丝绸之路”的南、北两道从楼兰分道。"},
		{3, "白驼山", 1, {2, 0}, "这可是当年大魔头欧阳锋的发家之地。今天的白驼山却很安静。。。"},
		{4, "野猪林", 1, {3, 0}, "野猪林里到处都是野猪。。。嗖！嗖！嗖！搜！。。。四只小野猪围了过来。喝过8个巨无霸后，领头的野猪朗声道：俗套！"},
		{5, "水晶洞", 1, {4, 0}, "走进一个洞中，洞中的景色马上呈现在眼前，这里真是太美了。一低头，发现脚边有一块石碑，上面写着：水晶洞。"},
		{6, "天蚕洞", 1, {5, 0}, "天蚕洞满地蚕茧，满地飞蛾。噗噜噜！噗噜噜！拨开飞蛾，踢开蚕蛹。。。但见一绝色女尼正坐在你的面前@！@！闭眼闭眼！"},
		{7, "黑风寨", 1, {6, 0}, "黑风寨只有狂风在不停地吹。突然，一条东瀛狼狗疯狂地扑了上来，一阵乱咬。"},
		{8, "冰火岛", 1, {7, 0}, "冰火岛上只有火球、冰块。快跑，轰隆隆----火山爆发了！咦，怎么只有烟，没有火？"}
	},
	{
		{9, "迷宫", 1, {0, 1}, "这里是高昌迷宫，也是一个十分神秘的地方，连江湖阅历及其丰富的老侠客都不知道这会发生什么事情。"},
		{10, "凌霄城", 1, {1, 1}, "凌霄城只有哆嗦，没人。"},
		{11, "轩辕岭", 1, {2, 1}, "一条山岭，绿油油的，不过从远处看去，岭上透出一层杀气，问过路人才知道，这里就是早有耳闻的轩辕岭！"},
		{12, "华山", 1, {3, 1}, "自古华山一条路，只许上，不许撤。如同风景介绍一般，五岳派总舵岂是邪魔歪道们随便来去之地？不过如果是君子，那就大可放心了。"},
		{13, "嵩山", 1, {4, 1}, "在雄伟的嵩山上，有一个江湖上名声响亮的寺庙：少林寺。如果说桂林山水甲天下，那么少林武功甲天下并不为过。"},
		{14, "紫禁城", 1, {5, 1}, "大内高手云集的地方。谁要赶来这里闹事，得罪的不光是大内锦衣卫，还有当今的皇上。"},
		{15, "快活林", 1, {6, 1}, "快活林快活林，有钱才能快乐！"},
		{16, "神龙岛", 1, {7, 1}, "这一上岛来，就能听到不知是韦小宝还是周星驰发出的笑声：啊哈哈哈哈哈哈哈！！这就是神龙教的总舵：神龙岛了。"}
	},
	{
		{17, "西域", 1, {0, 2}, "西域大漠的风沙吹得人和牲畜都睁不开眼睛。这里没有水，没有树，没有草，死一般的像个地狱。"},
		{18, "葫芦谷", 1, {1, 2}, "葫芦峪里似乎只有葫芦。远看还真像只大葫芦。"},
		{19, "唐门", 1, {2, 2}, "这里是唐家堡，从外面看这只是一个大宅院，与其他的富家宅院没有什么两样，但却是藏龙卧虎之地。"},
		{20, "终南山", 1, {3, 2}, "这里是终南山，全真教总舵。两旁丛丛耸耸的长满了各种树木，大道的尽头出现一座道观，几个小道士边聊天边请扫道观。"},
		{21, "石窟", 1, {4, 2}, "这里是龙门石窟，一个个的石窟自有一种神秘感。"},
		{22, "客栈", 1, {5, 2}, "地处交通要道的龙门客栈可是名扬四海，老帮娘金香玉的名头也是世人皆知，今天她在店里吗？"},
		{23, "玉皇顶", 1, {6, 2}, "一个永远不会安定的地方：泰山玉皇顶。这里是一个充满着厮杀的地方，无时无刻不充斥着暴力、仇杀的地方。"},
		{24, "灵蛇岛", 1, {7, 2}, "到处都是蛇的岛，这就是灵蛇岛。在这里，恐怖的故事层出不穷，令人毛骨悚然。不过要是喜欢吃蛇的人来到这里，可是该高兴死了。"}
	},
	{
		{25, "光明顶", 1, {0, 3}, "所谓三十六峰者，骈列舒张，横绝天表，众岫叠岭，效奇献秀，尽在一览。"},
		{26, "摩天崖", 1, {1, 3}, "这里是摩天崖，陡峭的石壁，就连猿猴上下都不可能，真是太险了。真难以想象当年谢烟客是如何在上面生存而又可以叱咤风云的。"},
		{27, "聚贤庄", 1, {2, 3}, "聚贤庄大家今日都很忙。虽然现在没人，不过无所谓！"},
		{28, "后山", 1, {3, 3}, "终终南后山的景色就是不一般，到处盛开着叫不上名字的各色小花，几只蜜蜂在花间飞舞，沿着一条花间小路来到一个古墓前，上面写着：活死人墓。"},
		{29, "武当山", 1, {4, 3}, "武当山只有火工道人在打盹。红卫兵刚刚来过！道士全都拉走批斗了！"},
		{30, "开封府", 1, {5, 3}, "宋朝时的都城，因有包青天而世人皆知。同时也是武林人士活动的要地。"},
		{31, "二十四桥", 1, {6, 3}, "今天没人乐意走二十四桥，不如坐下来喝点茶，寂寞高手嘛！"},
		{32, "蓬莱仙境", 1, {7, 3}, "云雾缭绕的蓬莱仙境自古以来都似乎隐藏着天大的秘密，谁能真正揭开这里的迷呢？也许你可以，也许他额可以。"}
	},
	{
		{33, "擂鼓山", 1, {0, 4}, "这里是擂鼓山，一点也想不到这座山为什么要起这个名字，看到的是这么美丽的景致，听到的却是个并不美丽的名字。"},
		{34, "峨眉山", 1, {1, 4}, "峨眉金顶只有几个扫山尼姑。尼姑当然寂寞！寂寞的人当然想说话！说了乱七八糟后，并没有提供什么有用的信息。"},
		{35, "迷踪林", 1, {2, 4}, "这里是迷踪林，人们总说这片树林不要轻易走进，因为它十分危险，据说有不少人走进去就再也没有出来过。"},
		{36, "五虎岭", 1, {3, 3}, "五虎岭素以五条猛虎闻名，每年都有许多不自量力的捕虎人成群进入，但从来都是一去无回，五虎真的如此厉害？"},
		{37, "天宁寺", 1, {4, 4}, "佛家地天宁寺，每天前来进香之人络绎不绝。可从进香之人求愿灵验的程度上让人不得不产生怀疑。"},
		{38, "积善堂", 1, {5, 4}, "积善堂今天没卖出一张彩票。此时已是深夜，不如早些睡了吧！"},
		{39, "镇江府", 1, {6, 4}, "从两百里以外就可以闻到一股酸味，这就是镇江府，盛产镇江醋。"},
		{40, "桃花岛", 1, {7, 4}, "桃花岛今天没人来偷桃，愉快的花工正躺在花下。"}
	},
	{
		{41, "恶人谷", 1, {0, 5}, "恶人善人都不在谷里。只有小鱼儿在睡觉！这家伙，抗倭一点都不积极。"},
		{42, "大理", 1, {1, 5}, "大理城里只有大理平民，平民最好打交道!"},
		{43, "百花谷", 1, {2, 5}, "哇，这里太美了，这里的很多花都叫不上名字！"},
		{44, "孔雀山庄", 1, {3, 5}, "这里金湖碧波荡漾，典型的傣式建筑掩映在茂密的森林之中，孔雀争相开屏、鸵鸟欢唱迎宾，梅花鹿湖畔戏水，人与自然和谐相融。"},
		{45, "五霸岗", 1, {4, 5}, "如果有人问：哪里能交上武林朋友？那答案肯定是五霸岗。此地虽怪石嶙峋、寸草不生，但却是天下英雄汇聚的地方。"},
		{46, "万仞堂", 1, {5, 5}, "万仞堂，顾名思义，十八般兵刃样样俱全。最近该堂还搞了点副业，外卖防具、药丸，有意者敬请光顾。"},
		{47, "栖霞古刹", 1, {6, 5}, "栖霞古刹今天没人来拜佛，倭寇究竟在哪里呢？不仅仰天长叹。"},
		{48, "六合塔", 1, {7, 5}, "六合塔里阴森森的。空调可够足的！"}
	},
	{
		{49, "玩偶山庄", 1, {0, 6}, "来到了玩偶山庄，这里好像什么东西都与其他地方有些不同，这是一个十分特别的地方，不知进庄之后还能有什么与众不同的东西。"},
		{50, "黑木崖", 1, {1, 6}, "黑木崖今天没人来会任我行。突然间，飞来一只黑鸽，徐徐盘旋而下。"},
		{51, "蝴蝶谷", 1, {2, 6}, "为何蝴蝶谷中会有如此众多的蝴蝶？是不是因为发生了什么不可告人的事情？看来只有有缘人才能知道了。"},
		{52, "铁花堡", 1, {3, 6}, "神秘的铁花堡，曾经是飞龙帮在三百年前的总舵。自从飞龙帮最后一任帮主争夺武林盟主失败自杀后，如今已是一片凋零。如今的铁花堡，多的是制造铁工艺品的工匠。"},
		{53, "霹雳堂", 1, {4, 6}, "江湖雷家曾把这里建立成唯一可以与唐门暗器抗衡的雷家火器大本营。"},
		{54, "关帝庙", 1, {5, 6}, "一到关帝庙，就会看到无数乞丐。他们虽乞讨，但真实的任务却是习武练功，除暴安良。"},
		{55, "麒麟庄", 1, {6, 6}, "麒麟庄的人都被麒麟给吓跑了。"},
		{56, "销魂宫", 1, {7, 6}, "销魂宫现在没人消化灵魂。不如跟小姐们聊聊！群中的眼睛是雪亮的！头牌秦可卿柔声道：大兄弟做个大保健吧！"}
	},
	{
		{57, "石府", 1, {0, 7}, "天机石府里只有石头。石头当然不会是乱放的。可惜，石头太多怎么办？"},
		{58, "金三角", 1, {1, 7}, "金三角里看来没有别人。只有只老狗悻悻的靠在罂粟田头吸着什么。。。"},
		{59, "忏悔崖", 1, {2, 7}, "忏悔崖上没人在忏悔，却有人在宣传倭寇！"},
		{60, "通吃岛", 1, {3, 7}, "通吃岛上只有“此岛危险！当心被吃”几个字。"},
		{61, "通天观", 1, {4, 7}, "一个普普通通、其貌不扬的小小通天观，有意者都可以进来玩玩。观内有一颗很高的大树，从来没有人能够爬到树顶。据说它是通天的。"},
		{62, "紫霞亭", 1, {5, 7}, "紫霞亭现在空着，亭中有一盘棋。棋子不合棋法，但对你却有用！"},
		{63, "天弃庵", 1, {6, 7}, "天弃庵是空空荡荡的小尼姑庵。我想进去，但人家不让。"},
		{64, "侠客岛", 1, {7, 7}, "侠客岛没人钻研侠客神功。卖门票的女子百无聊赖。"}
	}
};

// 声明当前玩家变量
Player *curr_player;

// 当前商品/背包页面
int curr_page = 0;

/** 初始化游戏数据 */
void init(void)
{
	// 设置当前登录玩家默认为玩家1
	curr_player = &players[0];

	// 设置玩家的武器、防具和门派
	curr_player->weapon = prop_array[0];
	curr_player->armor = prop_array[1];
	curr_player->martial = martials[10];

	// 初始化背包
	curr_player->bag.prop_count = 0;
	curr_player->bag.prop_max = 8;
}

/** 显示全局数据 */
void show(void)
{
	// 获取道具数组的大小
	int prop_count = sizeof(prop_array) / sizeof(Prop);
	int i, j;

	// 打印道具数组信息
	printf("编号\t名称\t\t价格\n");
	for (i = 0; i < prop_count; i++)
	{
		printf("%d\t%s\t%.0lf\n", prop_array[i].id, prop_array[i].name, prop_array[i].price);

		// 根据道具类型打印
		switch (prop_array[i].type)
		{
			case weapon:       // 武器类型
				printf("最小攻击力：%d\t最大攻击力：%d\n", prop_array[i].min_attack, prop_array[i].max_attack);
				break ;
			case armor:        // 防具类型
				printf("最小防御力：%d\t最大防御力：%d\n", prop_array[i].min_defense, prop_array[i].max_defense);
				break ;
			case consumables:  // 消耗品类型
				printf("最小能量值：%d\t最大能量值：%d\n", prop_array[i].min_power, prop_array[i].max_power);
				break ;
		}
	}

	printf("\n打印地图信息：\n");
	// 外部循环控制行
	for (i = 0; i < 8; i++)
	{
		// 内部循环控制列
		for (j = 0; j < 8; j++)
		{
			printf("%-10s", map_array[i][j].name);
		}
		printf("\n");
	}
}

/** 显示游戏欢迎信息 */
void show_welcome(void)
{
	// 在第0行的第MARGIN_X开始打印
	set_cursor_position(MARGIN_X, 0);
	printf("%s", SEP);

	// 在第1行的第MARGIN_X开始打印
	set_cursor_position(MARGIN_X, 1);
	printf("|");

	// 往右移动
	set_cursor_position(MARGIN_X + 28, 1);
	printf("欢迎来到笑傲江湖世界！");  // 游戏名称最好也定义为常量

	// 往右移动
	set_cursor_position(MARGIN_X + 77, 1);
	printf("|");

	// 在第2行的第MARGIN_X开始打印
	set_cursor_position(MARGIN_X, 2);
	printf("%s", SEP);
}

/** 显示游戏地图 */
void show_map(void)
{
	// 要根据当前玩家的坐标来显示地图的文字
	int i, j;

	// 打印地图
	for (i = 0; i < 8; i++)
	{
		// 移动到每行的开头
		set_cursor_position(MARGIN_X, MAP_START_Y + i);
		for (j = 0; j < 8; j++)
		{
			// 打印开头的|
			if (j == 0)
				printf("|   ");

			// 检查所在的坐标
			if (i == Y && j == X)
			{
				// 更改地图文字的颜色和背景色
				set_color(5, 15);
			}
			printf("%-9s", map_array[i][j].name);
			set_color(10, 0);  // 打印完特殊地图后，将颜色变回默认颜色
		}

		// 移动到行末
		set_cursor_position(MARGIN_X + 77, MAP_START_Y + i);
		// 打印结尾的|
		printf("|");
	}

	// 移动到地图下面
	set_cursor_position(MARGIN_X, MAP_END_Y);
	// 打印分隔符
	printf(SEP);

	// 打印当前地图信息
	show_map_info();
}

/** 在信息界面显示当前地图的信息 */
void show_map_info(void)
{
    // 清除信息窗的信息
    clear_info(MARGIN_X, INFO_START_Y, 7);

    // 显示当前玩家所在地图的信息
    // 打印当前所在地图名称
    set_cursor_position(MARGIN_X + 25, INFO_START_Y);
    printf("当前玩家所在地图：《%s》", map_array[Y][X].name);

    // 打印当前所在地图介绍
    set_cursor_position(MARGIN_X + 10, INFO_START_Y + 1);
    // 需要控制文字显示的行
    char *desc = map_array[Y][X].desc;  // 保存地图介绍地址
    int desc_len = strlen(desc);        // 获取地图介绍长度
    int i;

    // 一个字打印
    for (i = 0; i < desc_len; i++)
	{
		// 控制每行只能打印60个中文字符
		if (i != 0 && i % 60 == 0)
		{
			// 每次将光标往后移动一个字的距离
			set_cursor_position(MARGIN_X + 10, INFO_START_Y + 1 + i / 60);
		}
		printf("%c", desc[i]);
	}
}

/** 显示游戏地图下方的游戏信息 */
void show_information(void)
{
	int i;

	// 移动到信息的开头
	set_cursor_position(MARGIN_X, INFO_START_Y);

	// 信息窗口一共有7行
	for (i = 0; i < 7; i++)
	{
		// 移动到每行的开头并打印|
		set_cursor_position(MARGIN_X, INFO_START_Y + i);
		printf("|");

		// 移动到每行的末尾并打印|
		set_cursor_position(MARGIN_X + 77, INFO_START_Y + i);
		printf("|");
	}
	// 移动到信息下面打印分隔符
	set_cursor_position(MARGIN_X, INFO_END_Y);
	printf(SEP);
}

/** 显示游戏主菜单 */
void show_main_menu(void)
{
	// 移动到主菜单的开头
	set_cursor_position(MARGIN_X, MAINMENU_START_Y);
	printf("游戏菜单：");

	// 继续向下移动并打印菜单
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 1);
	printf("1、自我欣赏");
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 2);
	printf("2、查找怪物");
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 3);
	printf("3、回总舵");
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 4);
	printf("4、购买装备");
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 5);
	printf("5、查看背包");
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 6);
	printf("6、退出游戏");
}

/** 处理游戏主菜单的业务 */
void process_main_menu(char key)
{
	// 根据key的值来执行不同的函数
	switch (key)
	{
		case '1':  // 自我欣赏
			show_player_info();
			break ;
		case '2':  // 查找怪物
			show_monsters();
			break ;
		case '3':  // 回总舵
			teleport(curr_player->martial.hq_coord.X, curr_player->martial.hq_coord.Y);
			break ;
		case '4':  // 购买道具
			curr_page = 0;  // 重置页面
			show_props();
			break ;
		case '5':  // 查看背包
			curr_page = 0;  // 重置页面
			show_bag();
			break ;
		case '6':  // 退出游戏
			game_run = 0;
			break ;
	}
}

/** 在信息界面显示玩家的个人资料 */
void show_player_info(void)
{
	// 清除信息窗的信息
	clear_info(MARGIN_X, INFO_START_Y, 7);

	// 移动光标开始打印玩家信息
	// 打印名称
	set_cursor_position(MARGIN_X + 20, INFO_START_Y);
	printf("大侠《%s》的个人资料如下：", curr_player->name);

	// 打印个人信息
	set_cursor_position(MARGIN_X + 10, INFO_START_Y + 1);
	printf("等级：%d\t血量：%d\t内力：%d\t经验值：%d", curr_player->level, curr_player->hp, curr_player->mp, curr_player->exp);

	// 打印武器和防具信息
	set_cursor_position(MARGIN_X + 10, INFO_START_Y + 2);
	printf("当前武器：%s(%d/%d)\t", curr_player->weapon.name, curr_player->weapon.min_attack, curr_player->weapon.max_attack);
	printf("当前防具：%s(%d/%d)", curr_player->armor.name, curr_player->armor.min_defense, curr_player->armor.max_defense);

	/********************************************************/

	// 下面可以自行显示玩家的其他信息

}

/** 在信息界面显示当前地图的怪物 */
void show_monsters(void)
{
	// 定义怪物等级称号数组
	char level_names[9][9] = {"乳臭未干", "初出茅庐", "粗通皮毛", "青年才俊", "略有小成", "心领神会", "出类拔萃", "所向无敌", "天人合一"};

	// 清除信息窗的信息
	clear_info(MARGIN_X, INFO_START_Y, 7);

	// 怪物总数
	int monster_count = sizeof(monster_array) / sizeof(Monster);

	int monster_index[9];            // 当前地图怪物下标数组（最多一次显示9个）
	int curr_map_monster_count = 0;  // 当前地图的怪物总数
	int curr_monster_index;          // 当前怪物下标
	int i;

	// 保存当前地图活着的怪物的下标
	for (i = 0; i < monster_count; i++)
	{
		// 如果怪物的坐标为当前玩家坐标，并且怪物的状态为活着
		if (monster_array[i].coord.X == X && monster_array[i].coord.Y == Y && monster_array[i].state != 0)
		{
			// 保存怪物下标，并将当前地图怪物数量++
			monster_index[curr_map_monster_count] = i;
			curr_map_monster_count++;

			// 如果当前地图怪物数量达到9只则停止查找
			if (curr_map_monster_count == 9)
				break ;
		}
	}

	// 移动光标并打印怪物信息
	set_cursor_position(MARGIN_X + 10, INFO_START_Y);

	// 如果当前地图没有怪物
	if (curr_map_monster_count == 0)
	{
		printf("当前地图冷冷清清的！");
		return ;  // 没有怪物则结束函数
	}

	// 打印怪物信息
	printf("当前地图出现了如下怪物：");
	set_cursor_position(MARGIN_X + 5, INFO_START_Y + 2);
	for (i = 0; i < curr_map_monster_count; i++)
	{
		// 控制每行打印三个怪物
		if (i != 0 && i % 3 == 0)
		{
			// 移动光标至下个怪物打印的起始位置
			set_cursor_position(MARGIN_X + 5, INFO_START_Y + 2 + i / 3);
		}
		curr_monster_index = monster_index[i];  // 保存当前怪物下标
		printf("%d.%s(%s)\t", monster_array[monster_index[i]].id, monster_array[monster_index[i]].name, level_names[monster_array[curr_monster_index].level - 1]);
	}
	show_information();  // 显示信息窗口开头和结尾的|

	// 移动到信息窗的最下面
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// 下面让玩家选择要pk的怪物编号，调用fight函数
	int pk_monster_id = -1;

	printf("请输入要攻击的对象：（按0返回）");
	scanf("%d", &pk_monster_id);
	/**********************************
	* 注意：需要验证用户的输入
	* 请自行完成
	**********************************/

	// 和选择的怪物战斗
	fight(pk_monster_id);
	show_information();  // 显示信息窗口开头和结尾的|
}

/** pk怪物的方法 */
void fight(int monster_id)
{
	int monster_index = -1;  // 要查找的怪物下标

	// 怪物总数
	int monster_count = sizeof(monster_array) / sizeof(Monster);
	int i;

	// 查找要pk的怪物id
	for (i = 0; i < monster_count; i++)
	{
		// 如果找到，则保存怪物下标并退出
		if (monster_id == monster_array[i].id)
		{
			monster_index = i;
			break ;
		}
	}

	// 清空最后一行
	clear_info(MARGIN_X, INFO_END_Y - 1, 1);

	// 移动到信息窗口的最下面并打印消息
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// 如果玩家要pk的怪物不存在
	if (monster_index == -1)
	{
		printf("要PK的怪物不存在，按任意键继续！");
		return ;
	}

	// 如果怪物存在
	int fight_rounds = 0;  // pk的轮数
	while (1)
	{
		srand(time(NULL));

		// 玩家和怪物互殴，通过随机数来生成攻击力
        int player_attack;
        player_attack = rand() % (curr_player->weapon.max_attack - curr_player->weapon.min_attack + 1) + curr_player->weapon.min_attack;

        // 减少怪物血量并检查怪物是否死亡
        monster_array[monster_index].hp -= player_attack;
        if (monster_array[monster_index].hp <= 0)
		{
			break ;  // 怪物死亡，战斗结束
		}

		// 暂时忽略玩家防御力
		curr_player->hp -= monster_array[monster_index].att;

		// 检查玩家是否死亡
		if (curr_player->hp <= 0)
		{
			break ;  // 玩家死亡，战斗结束
		}

		// 清空最后一行
		clear_info(MARGIN_X, INFO_END_Y - 1, 1);

		// 移动到信息窗口的最下面并打印消息
		set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

        fight_rounds++;      // 轮数加加
        printf("战斗第%d轮，%sHP:%d\t%sHP:%d", fight_rounds, curr_player->name, curr_player->hp, monster_array[monster_index].name, monster_array[monster_index].hp);
        usleep(1000 * 200);  // 暂停200毫秒
	}

	// 清空最后一行
	clear_info(MARGIN_X, INFO_END_Y - 1, 1);

	// 移动到信息窗口的最下面并打印消息
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// 如果玩家死亡，则游戏结束
	if (curr_player->hp <= 0)
	{
		// 移动光标至最后一行并打印消息
		set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);
		printf("江湖快讯：大侠《%s》在与《%s》的战斗中壮烈牺牲！游戏结束！", curr_player->name, monster_array[monster_index].name);
		game_run = 0;
		return ;
	}
	printf("经过艰苦的战斗，《%s》被您杀死，获得%d经验，%d金币！", monster_array[monster_index].name, monster_array[monster_index].exp, monster_array[monster_index].max_money);

	// 增加玩家的经验和金钱
	curr_player->exp += monster_array[monster_index].exp;
	curr_player->gold += monster_array[monster_index].max_money;
}

/** 瞬间移动到制定坐标 */
void teleport(int x, int y)
{
	// 移动用户的位置
	Y = y;
	X = x;

	// 刷新地图
	show_map();
}

/** 在信息界面显示商品 */
void show_props(void)
{
	int i;

	// 道具类型
	char type_array[3][7] = {"武器", "防具", "消耗品"};

	// 获取全部商品的数量
	int props_count = sizeof(prop_array) / sizeof(Prop);

	// 清除信息窗的信息
	clear_info(MARGIN_X, INFO_START_Y, 7);

	// 移动光标并打印信息
	set_cursor_position(MARGIN_X + 10, INFO_START_Y);
	printf("欢迎来到老九商店：");

	// 移动光标并开始打印商品
	for (i = curr_page * 3; i < props_count; i++)
	{
		// 每次将光标往下移动一格
		set_cursor_position(MARGIN_X + 5, INFO_START_Y + 2 + i % 3);
		printf("%3d.%-11s 等级：%-3d 库存：%-4d 价格：%-7.0lf 类型：%s", prop_array[i].id, prop_array[i].name, prop_array[i].level, prop_array[i].stock, prop_array[i].price, type_array[prop_array[i].type]);

		// 控制打印商品，如果打印数量到了3则停止打印
		if (i % props_count == 2)
			break ;
	}

	// 移动到信息窗的最下面
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// 请求用户的操作
	int buy_change_page_quit = 0;
	printf("请选择要购买（1）、翻页（2）或者退出（0）：");
	scanf("%d", &buy_change_page_quit);

	// 清空最后一行
	clear_info(MARGIN_X, INFO_END_Y - 1, 1);

	// 移动到信息窗的最下面
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// 如果是退出
	if (buy_change_page_quit == 0)
	{
		printf("按任意键继续");
		return ;
	}

	// 如果是购买
	if (buy_change_page_quit == 1)
	{
		int prop_id;  // 商品编号

		printf("请输入要购买的商品号：");
		scanf("%d", &prop_id);

		// 进行交易
		trade(curr_player, prop_id);
	}
	else if (buy_change_page_quit == 2)
	{
		// 调用翻页函数
		change_curr_page();

		// 检查页面是否合法
		if (curr_page < 0)
		{
			printf("已经是第一页了！");
			Sleep(1000);  // 暂停一秒让用户看到信息
			curr_page = 0;
		}
		else if (curr_page * 3 >= props_count)
		{
			printf("已经是最后一页了！");
			Sleep(1000);  // 暂停一秒让用户看到信息
			curr_page--;
		}

		// 再次调用show_props函数
		show_props();
	}
}

/** 翻页功能 */
void change_curr_page(void)
{
	int before_next;  // 上一页或者下一页

	printf("上一页请按+，下一页请按-：");
	before_next = getch();

	// 清空最后一行
	clear_info(MARGIN_X, INFO_END_Y - 1, 1);

	// 移动到信息窗的最下面
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// 检查用户按键
	if (before_next == '+')
		curr_page++;
	else if (before_next == '-')
		curr_page--;
}

/** 交易系统 */
void trade(Player *player, int prop_id)
{
	int i;
	Prop *trade_prop = NULL;  // 要购买的商品指针
	int props_count = sizeof(prop_array) / sizeof(Prop);  // 道具数组大小

	// 道具类型
	char type_array[3][7] = {"武器", "防具", "消耗品"};

	// 搜索商品
	for (i = 0; i < props_count; i++)
	{
		if (prop_id == prop_array[i].id) {
			trade_prop = &prop_array[i];  // trade_prop = prop_array + i;
			break ;
		}
	}

	// 清空最后一行
	clear_info(MARGIN_X, INFO_END_Y - 1, 1);

	// 移动到信息窗的最下面
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// 检查是否找到商品
	if (trade_prop == NULL)
	{
		// 清空最后一行
		clear_info(MARGIN_X, INFO_END_Y - 1, 1);

		// 移动到信息窗的最下面
		set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);
		printf("要查找的商品不存在！");
		return ;  // 如果没找到则结束交易
	}

	// 检查商品库存
	if (trade_prop->stock <= 0)
	{
		printf("地主家都没有余粮！商店都被买空啦！\n");
		return ;
	}

	// 检查玩家余额
	if (player->gold < trade_prop->price)
	{
		printf("钱包都是瘪的，这里可是看钱的社会！\n");
		return ;
	}

	// 玩家背包道具增加
	// 判断玩家背包中是否已有该商品

	// 如果有该商品，背包中的该商品总数+1
	for (i = 0; i < player->bag.prop_count; i++)
	{
		// 如果要购买的商品id跟背包中的某个商品id相同
		if (prop_id == player->bag.props[i].id)
		{
			player->bag.props[i].stock++;
			break ;
		}
	}

	// 如果没有该商品，该商品添加到背包中即可
	if (i == player->bag.prop_count)
	{
		// 检查背包空间
		if (player->bag.prop_count >= player->bag.prop_max && player->bag.prop_count != 0)
		{
			printf("背包已满，交易失败！\n");
			return ;
		}

		// 想背包中创建一个商品-复制一份要交易的商品信息到背包中
		int new_index = player->bag.prop_count;
		player->bag.props[new_index].id = trade_prop->id;
		player->bag.props[new_index].price = trade_prop->price;
		player->bag.props[new_index].level = trade_prop->level;
		player->bag.props[new_index].stock = 1;
		player->bag.props[new_index].type = trade_prop->type;
		strcpy(player->bag.props[new_index].name, trade_prop->name);
		strcpy(player->bag.props[new_index].desc, trade_prop->desc);
		player->bag.prop_count++;
	}

	// 满足交易条件，执行交易的业务操作
	// 商品库存-1
	trade_prop->stock--;

	// 玩家金币-商品单价
	player->gold -= trade_prop->price;

	// 移动到信息窗的最下面
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);
	printf("你成功购买了《%s》，剩余金钱：%d！请按任意键继续", trade_prop->name, curr_player->gold);
}

/** 查看背包功能 */
void show_bag(void)
{
	int i;

	// 道具类型
	char type_array[3][7] = {"武器", "防具", "消耗品"};

	// 清除信息窗的信息
	clear_info(MARGIN_X, INFO_START_Y, 7);

	// 移动光标并打印信息
	set_cursor_position(MARGIN_X + 10, INFO_START_Y);
	printf("大侠《%s》的背包：", curr_player->name);

	// 如果背包是空格
	if (curr_player->bag.prop_count == 0)
	{
		// 移动光标并打印信息
		set_cursor_position(MARGIN_X + 5, INFO_START_Y + 2);
		printf("大侠！你的背包空空如也啊！该去老九商店进货啦！");
	}

	// 移动光标并开始打印商品
	for (i = curr_page * 3; i < curr_player->bag.prop_count; i++)
	{
		// 每次将光标往下移动一格
		set_cursor_position(MARGIN_X + 5, INFO_START_Y + 2 + i % 3);
		printf("%-11s 等级：%-3d 数量：%-4d 价格：%-7.0lf 类型：%s", curr_player->bag.props[i].name, curr_player->bag.props[i].level, curr_player->bag.props[i].stock, curr_player->bag.props[i].price, type_array[curr_player->bag.props[i].type]);

		// 控制打印商品，如果打印数量到了3则停止打印
		if (i % curr_player->bag.prop_count == 2)
			break ;
	}

	// 移动到信息窗的最下面
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// 请求用户的操作
	int bag_choice = 0;
	printf("请选择翻页（1）或者退出（0）：");
	scanf("%d", &bag_choice);

	// 清空最后一行
	clear_info(MARGIN_X, INFO_END_Y - 1, 1);

	// 移动到信息窗的最下面
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// 如果是退出
	if (bag_choice == 0)
	{
		printf("按任意键继续");
		return ;
	}

	if (bag_choice == 1)
	{
		// 调用翻页函数
		change_curr_page();

		// 检查页面是否合法
		if (curr_page < 0)
		{
			printf("已经是第一页了！");
			Sleep(1000);  // 暂停一秒让用户看到信息
			curr_page = 0;
		}
		else if (curr_page * 3 >= curr_player->bag.prop_count)
		{
			printf("已经是最后一页了！");
			Sleep(1000);  // 暂停一秒让用户看到信息
			curr_page--;
		}

		// 再次调用show_bag函数
		show_bag();
	}
}
