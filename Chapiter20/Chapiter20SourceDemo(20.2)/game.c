#include "game.h"

// ����ָ���������78��-��
#define SEP "------------------------------------------------------------------------------"

#define COL 78               // ��Ϸ�����ܿ���
#define MARGIN_X 10          // ��߾�
#define MAP_START_Y 3        // ��ͼ��ʼ��Y����
#define MAP_END_Y 11         // ��ͼ������Y����
#define INFO_START_Y 12      // ��Ϣ��ʼ��Y����
#define INFO_END_Y 19        // ��Ϣ������Y����
#define MAINMENU_START_Y 20  // ���˵���ʼ��Y����

// �����������
Player players[] = {
	{9527, "�Ʋ���", "bohu.tang", 100, 3, 1, 10000, 5000, 900000, 1000000, .coord.X = 3, .coord.Y = 1},
	{9528, "ף֦ɽ", "zhishan.zhu", 100, 3, 1, 10000, 5000, 900000, 1000000, .coord.X = 2, .coord.Y = 0}
};

// ���彭����������
Martial martials[20] ={
	{1, "������", "����", .hq_coord.X=4, .hq_coord.Y=1, 1, "�л���ѧ��̩������ĩ�������ڶ���˲��У�����պͼ��������Ϊһ�ȡ����У���ճ���Ϊɮ���������׼ҵ��ӡ���ʱ�����˳�����˫��������������ɮ�������ϵĴ����²μ��˽����غ��������ܵ�ս�����ڸ�·Ӧļ�����б��ֵ���Ϊ���¡���������֮�£�Ҳʹ�����е��ڶ����ɲ�����ì�ܣ������������ֺ�������̡���ա����������ȴ��콭��ͬ�ʹ��Ϲ�������������������̺�Ѫ�����ɽ�Ϊͬ�ˣ����ο�а���и������ƣ����Լ���Χ��δ�����գ��ڰ���������ʧ����"},
	{2, "�䵱��", "����", .hq_coord.X=4, .hq_coord.Y=3, 1, "�䵱�ڽ������������������С��������֡��������䵱��֮˵�� �䵱��һ�������������һλǫǫ���ӣ�һ�������������������Ǵ���ˬ�ʵ�Ц�ݣ��������ĳ�ж����ܲ������������ټ������Ӻ������˴�ʮ�������𽭺���������С��ʮ��ս�������δ�ܹ�һ�Ρ�����һ����������ܵ������¾���ʧ�ܺʹ��� "},
	{3, "ؤ��", "����", .hq_coord.X=6, .hq_coord.Y=2, 1, "ؤ������ԭ������������Ϊ�ڶ��һ�����ɣ�Ҳ�����µ�һ����ɣ��Ա鲼������ؤ����ؤ��ɣ���Ϊ���°�;��°ؤ�����˴�඼������λ�Ƚϵ͵��ˣ������Ǹ�����Ӳ�ǣ�Ʒ����У����ٳ��ֱ���֮�ˡ�ؤ����һ���ڶ���������Ϊ�ף������������������塢��ǿ������������ΪΪ������������ֵ���"},
	{4, "ȫ���", "����", .hq_coord.X=3, .hq_coord.Y=2, 1, "ȫ�����ڵ��̵ķ�֧֮һ���ֽ�ȫ���������Ȩ��������һ������СС���ˣ�����һ˫���䵭��������Զ������ʲô�仯���۾����������·��ǻ�ɫ�ġ���������һ���ǳ��������ˣ���ϲ����ɫ��ϲ���������˻������ƣ�ϲ�����ܡ���ÿһ�����������ǳ������ޣ�����ÿһ���¶��������ܼƻ��������϶��˷�һ��������Ҳ������һ������������ȫ�溣�š�"},
	{5, "��������", "����", .hq_coord.X=3, .hq_coord.Y=1, 1, "̩ɽ�ɣ���ɽ�ɣ���ɽ�ɣ���ɽ�ɣ���ɽ�ɽ�Ϊͬ��֦���ĵ��������ɣ��ڽ���������������������һ������Ĳ��ͣ��������ɵ�ʽ΢��������������֣����������ڲ�ì�ܼ��������ںĵĽ�����ڲ��Ĺ��Ķ�����Ȼ�����Կ���Ϊ��ڳ��֣�ʵ����Ϊ������������ɱ��Ȩ��"},
	{6, "�Ĵ�����", "����", .hq_coord.X=2, .hq_coord.Y=2, 1, "�����ڽ������԰������������Դ����ŵ�����̫̫�������Ƽұ�һ�ȼҵ����䣬��֮����Ϊ�ư����������������ʹ�����������ٶȵĺƽ٣�����һ�겻��������Σ�ѵ�ʱ�����ų�����һȺ������������磡���ն����ȱ�������������������������������˿︴������������ģ������ڽ������������壬��������ŵ�������ʹ���ų�Ϊ�˽����ϵ��������ɡ�"},
	{7, "��������", "����", .hq_coord.X=1, .hq_coord.Y=5, 1, "���������˶��ڶ࣬�������ơ�������һλ���ｭ������Ů��������ѩ������ѩ���������㣬��ɫ��𪣬��΢������������ȥ��������ȴ���������书������ô����书�ĵá�"},
	{8, "��ɽ��", "����", .hq_coord.X=0, .hq_coord.Y=0, 1, "��ɽ�����������ɣ�Ҳ��Ŀǰ��������Ϊ�Ž��һ�����ɡ���ɽ��Ҳ�ǽ�����Ů������Ϊ�ڶ��һ�����ɣ��Ҹ����书���費������ò���㡣"},
	{9, "��Ĺ��", "����", .hq_coord.X=3, .hq_coord.Y=3, 1, "��Ĺ����һ���Ĵ���������������һŮ�ӣ�������������������浾������࿡������ֹƮ�ݣ���������ȴ����ʦ��С��Ů��������һ������ķ���书��Ϊ��ɲ⣬ͬ��ϲ�����¡������Ṧ׿Խ��������ȭ���鶯���������ȫ��̵Ŀ��ǡ���Ĺ���˵Ĵ���ԭ���ǡ��²��ؼ����߸߹��𡱣������������������ӣ������������ð���˹�Ĺ���ˣ�����һ�������úܲҡ�"},
	{10, "������", "����", .hq_coord.X=5, .hq_coord.Y=1, 1, "������������ٸ���������Ҳ�����ڽ����ϴ������õ����ָ��֡�������һ��һ���˲�����һλ�ºŽС������������ģ����˴Ӳ�������Ŀ���ˣ�������Ļ��߻�һЩ���顣"},
	{11, "�������", "а��", .hq_coord.X=1, .hq_coord.Y=6, 1, "���ڸý̸����ڶ࣬���˴˻�����������Խ�����ӡ����е��Ӷ�Ϊа��֮ͽ��ר�������������ԣ�ɱ�����࣬������ã��ʱ���������֮�˱�Ϊħ�̡�"},
	{12, "Ȩ����", "а��", .hq_coord.X=6, .hq_coord.Y=6, 1, "а��֮һ��Ŀǰ�����������Ϊһ�а��ɵ������ˡ����ɣ�һ���������쳣��㨵��ˡ�û�����佻���ֵ����ָ��֣��޷������������������������������ô���Ǳ�����������������������֧����Ȩ����ĵ��ӵġ�"},
	{13, "�嶾��", "а��", .hq_coord.X=0, .hq_coord.Y=2, 1, "һ����ʹ��Ϊר�������ɣ������˸��������ö����֡����ɸ����˳����ʣ�����ʹ�����뻯��������������ĥ������ͬ������Ī���Ƶ����С�����Ʒ��ʱ��ʱ����������׿��������ɳա�"},
	{14, "������", "а��", .hq_coord.X=7, .hq_coord.Y=2, 1, "�������ǽ���а�ɣ����ڽ�ַԶ����ԭ�����Բ����Ԥ��ԭ���ֵ�Ѫ��ɱ¾��Ŀǰ����������λ����һΪ���񣬴����书����Ī�⣬�Ը��Ƨ�������ϲ���˽ӽ�����Ϊ�������书��ǿ��Ƣ�����꣬����û�����ԡ�"},
	{15, "������", "а��", .hq_coord.X=6, .hq_coord.Y=5, 1, "�����������������һ��������֯���������·�ʮ���ã��ֱ�����Ϊ���š�"},
	{16, "�һ���", "������а", .hq_coord.X=7, .hq_coord.Y=4, 1, "�ԴӶ�а��ҩʦ���������ڴ˺����Ĵ��˾����������Ӳ����������һ������������ɵ��ܶ档�һ�����ҩʦ�Ĺ��ŵ��ӳ�Ӣһ��δ�ޣ��ڵ������˼���ͽ�ܣ��һ������书��˵õ������ͷ��"},
	{17, "������", "������а", .hq_coord.X=5, .hq_coord.Y=3, 1, "���ڽ��������˲żüã����������񣬴���Ұ�Ĳ�������������һ��������չ����ųƵ�ǹ���룬�书ʵ����ɲ⡣����Ϊ�˻��ǣ���ͨ�������б�ʱ�ܽ�ǧ��������ʹ����ͬ��ʮ�������ʮ�㡣"},
	{18, "Ѫ����", "������а", .hq_coord.X=4, .hq_coord.Y=2, 1, "�Դ�Ѫ���ɵ�����һ������������ƮȻ��ȥ��Ѫ��������˥�䡣Ѫ���ɻ�ķ�ΧҲԽ��Խ�٣�������ֻ��������ʯ�ߡ��������ϵľŴ������Ѿ���Ѫ������Ϊаħ��������Ѵ���Ӣ���ֻҪ�Ŵ����ɵ���������Ѫ���ɵ��ˣ�һ�ɸ�ɱ���ۡ��ڽ������Ѿ�û��ʲôѪ���ɵ��������ߡ������޺ޣ�û����֪�������Ժη�������ֻ֪��������Ѫ���ɡ�û����֪�������书�ж�ߣ���Ϊ�������Ľ����˶��Ѿ�......�޺��������е�һ���գ�����������ɽ���ഫ��Ϊ��һ����������Ů�ӡ��ഫѪ�ӵ��ӻ���ȱ������޺��洫�����޺����ӽ����ڼ����Ѫ�ӵ�һ�а������񡣻���ȱΪ��������ϣ��ڽ�������Ե���ã�����Ѫ����������������þ���������"},
	{19, "ͨͨ��", "������а", .hq_coord.X=3, .hq_coord.Y=7, 1, "������һ�����ص����ɣ���ʼ�ˣ��书���顣�ܶ�����ͨ�Ե�����������������Ժ��������ֶ��Ͽᣬ�������ˡ�ƽ��������̤����ԭ���֣�Ǳ�������书��"},
	{20, "��żɽׯ", "������а", .hq_coord.X=6, .hq_coord.Y=0, 1, "������һ�����ص����ɣ���ʼ�ˣ��书���顣�ܶ������żɽׯ������������������⡣��żɽׯ�����ڶ࣬���󶼾���������ֻ�����⾭�������˼����������������ã������������˲�֪����ôһ�����ɴ��ڡ�"}
};

// �����������
Monster monster_array[] = {
	{1, "���౦��", 1, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{2, "���ǿ���", 2, 200, 8, 2, 5, 10, 5, 1, {0, 0}},
	{3, "�����о�", 9, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{4, "��ħС��", 8, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{5, "�ɺ�С����", 7, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{6, "���������", 6, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{7, "�Ϸ���", 5, 100, 5, 2, 5, 10, 5, 1, {0, 0}},
	{8, "�Ϸ���", 9, 100, 5, 2, 5, 10, 5, 1, {0, 1}}
};

// �����������
Prop prop_array[] = {
	{1, "�ۻ����ҽ�", 1, 5, 5000, weapon, .min_attack=1, .max_attack=4, "�Ϲ���������ù��ı�����"},
	{2, "����֮��", 2, 5, 10000, armor, .min_defense=2, .max_defense=6, "ȡ����֮�����������˺���"},
	{3, "��Һ����", 3, 5, 15000, consumables, .min_power=100, .max_power=500, "��һ��ϵ�������Ʒ����ĸ���ﶼ˵�ã�"}
};

// �����ͼ���� - 64�ŵ�ͼ
Map map_array[8][8] = {
	{
		{1, "��ɽ", 1, {0, 0}, "�ݡ������Ӵ������أ�3000��ǰ���ܳ�����������\"�˿�����\"������ɽ������ĸ����ؽӼ��������������ʹ��������������ԭ�ز�������ĸ���������ɽ������屦������������������ɽ��ʤ����������\"����ĸ֮ɽ\"����������ٱ�ʱ������ĸȰ����������ϯ��Ի:\"ף�����٣�Ը��������\""},
		{2, "¥��", 1, {1, 0}, "��ͨ�ػͣ����������ȡ�ξ�磬���ϵ���Ǽ����ĩ���Ŵ���˿��֮·�����ϡ���������¥���ֵ���"},
		{3, "����ɽ", 1, {2, 0}, "����ǵ����ħͷŷ����ķ���֮�ء�����İ���ɽȴ�ܰ���������"},
		{4, "Ұ����", 1, {3, 0}, "Ұ�����ﵽ������Ұ��������ಣ�ಣ�ಣ��ѣ���������ֻСҰ��Χ�˹������ȹ�8�����ްԺ���ͷ��Ұ�������������ף�"},
		{5, "ˮ����", 1, {4, 0}, "�߽�һ�����У����еľ�ɫ���ϳ�������ǰ����������̫���ˡ�һ��ͷ�����ֽű���һ��ʯ��������д�ţ�ˮ������"},
		{6, "��϶�", 1, {5, 0}, "��϶����زϼ룬���طɶꡣ�����࣡�����࣡�����ɶ꣬�߿���Ӽ����������һ��ɫŮ�������������ǰ@��@�����۱��ۣ�"},
		{7, "�ڷ�կ", 1, {6, 0}, "�ڷ�կֻ�п���ڲ�ͣ�ش���ͻȻ��һ������ǹ���������������һ����ҧ��"},
		{8, "����", 1, {7, 0}, "������ֻ�л��򡢱��顣���ܣ���¡¡----��ɽ�����ˣ��ף���ôֻ���̣�û�л�"}
	},
	{
		{9, "�Թ�", 1, {0, 1}, "�����Ǹ߲��Թ���Ҳ��һ��ʮ�����صĵط�����������������ḻ�������Ͷ���֪����ᷢ��ʲô���顣"},
		{10, "������", 1, {1, 1}, "������ֻ�ж��£�û�ˡ�"},
		{11, "��ԯ��", 1, {2, 1}, "һ��ɽ�룬�����͵ģ�������Զ����ȥ������͸��һ��ɱ�����ʹ�·�˲�֪��������������ж��ŵ���ԯ�룡"},
		{12, "��ɽ", 1, {3, 1}, "�ԹŻ�ɽһ��·��ֻ���ϣ�����������ͬ�羰����һ�㣬�������ܶ�����аħ����������ȥ֮�أ���������Ǿ��ӣ��Ǿʹ�ɷ����ˡ�"},
		{13, "��ɽ", 1, {4, 1}, "����ΰ����ɽ�ϣ���һ�����������������������������¡����˵����ɽˮ�����£���ô�����书�����²���Ϊ����"},
		{14, "�Ͻ���", 1, {5, 1}, "���ڸ����Ƽ��ĵط���˭Ҫ�����������£�����Ĳ����Ǵ��ڽ����������е���Ļ��ϡ�"},
		{15, "�����", 1, {6, 1}, "����ֿ���֣���Ǯ���ܿ��֣�"},
		{16, "������", 1, {7, 1}, "��һ�ϵ���������������֪��ΤС���������ǳ۷�����Ц����������������������������������̵��ܶ棺�������ˡ�"}
	},
	{
		{17, "����", 1, {0, 2}, "�����Į�ķ�ɳ�����˺������������۾�������û��ˮ��û������û�вݣ���һ������������"},
		{18, "��«��", 1, {1, 2}, "��«�����ƺ�ֻ�к�«��Զ��������ֻ���«��"},
		{19, "����", 1, {2, 2}, "�������Ƽұ��������濴��ֻ��һ����լԺ���������ĸ���լԺû��ʲô��������ȴ�ǲ����Ի�֮�ء�"},
		{20, "����ɽ", 1, {3, 2}, "����������ɽ��ȫ����ܶ档���ԴԴ����ʵĳ����˸�����ľ������ľ�ͷ����һ�����ۣ�����С��ʿ���������ɨ���ۡ�"},
		{21, "ʯ��", 1, {4, 2}, "����������ʯ�ߣ�һ������ʯ������һ�����ظС�"},
		{22, "��ջ", 1, {5, 2}, "�ش���ͨҪ�������ſ�ջ���������ĺ����ϰ�����������ͷҲ�����˽�֪���������ڵ�����"},
		{23, "��ʶ�", 1, {6, 2}, "һ����Զ���ᰲ���ĵط���̩ɽ��ʶ���������һ����������ɱ�ĵط�����ʱ�޿̲�����ű�������ɱ�ĵط���"},
		{24, "���ߵ�", 1, {7, 2}, "���������ߵĵ�����������ߵ���������ֲ��Ĺ��²���������ë���Ȼ������Ҫ��ϲ�����ߵ�������������Ǹø������ˡ�"}
	},
	{
		{25, "������", 1, {0, 3}, "��ν��ʮ�����ߣ��������ţ�����������ᶵ��룬Ч�����㣬����һ����"},
		{26, "Ħ����", 1, {1, 3}, "������Ħ���£����͵�ʯ�ڣ�����Գ�����¶������ܣ�����̫���ˡ�������������л�̿������������������ֿ���߳����Ƶġ�"},
		{27, "����ׯ", 1, {2, 3}, "����ׯ��ҽ��ն���æ����Ȼ����û�ˣ���������ν��"},
		{28, "��ɽ", 1, {3, 3}, "�����Ϻ�ɽ�ľ�ɫ���ǲ�һ�㣬����ʢ���Žв������ֵĸ�ɫС������ֻ�۷��ڻ�����裬����һ������С·����һ����Ĺǰ������д�ţ�������Ĺ��"},
		{29, "�䵱ɽ", 1, {4, 3}, "�䵱ɽֻ�л𹤵����ڴ���������ո���������ʿȫ�����������ˣ�"},
		{30, "���⸮", 1, {5, 3}, "�γ�ʱ�Ķ��ǣ����а���������˽�֪��ͬʱҲ��������ʿ���Ҫ�ء�"},
		{31, "��ʮ����", 1, {6, 3}, "����û�������߶�ʮ���ţ������������ȵ�裬��į�����"},
		{32, "�����ɾ�", 1, {7, 3}, "�������Ƶ������ɾ��Թ��������ƺ��������������ܣ�˭�������ҿ���������أ�Ҳ������ԣ�Ҳ��������ԡ�"}
	},
	{
		{33, "�޹�ɽ", 1, {0, 4}, "�������޹�ɽ��һ��Ҳ�벻������ɽΪʲôҪ��������֣�����������ô�����ľ��£�������ȴ�Ǹ��������������֡�"},
		{34, "��üɽ", 1, {1, 4}, "��ü��ֻ�м���ɨɽ��á���õ�Ȼ��į����į���˵�Ȼ��˵����˵�����߰���󣬲�û���ṩʲô���õ���Ϣ��"},
		{35, "������", 1, {2, 4}, "�����������֣�������˵��Ƭ���ֲ�Ҫ�����߽�����Ϊ��ʮ��Σ�գ���˵�в������߽�ȥ����Ҳû�г�������"},
		{36, "�廢��", 1, {3, 3}, "�廢�����������ͻ�������ÿ�궼�����಻�������Ĳ����˳�Ⱥ���룬����������һȥ�޻أ��廢������������"},
		{37, "������", 1, {4, 4}, "��ҵ������£�ÿ��ǰ������֮�����ﲻ�����ɴӽ���֮����Ը����ĳ̶������˲��ò��������ɡ�"},
		{38, "������", 1, {5, 4}, "�����ý���û����һ�Ų�Ʊ����ʱ������ҹ��������Щ˯�˰ɣ�"},
		{39, "�򽭸�", 1, {6, 4}, "������������Ϳ����ŵ�һ����ζ��������򽭸���ʢ���򽭴ס�"},
		{40, "�һ���", 1, {7, 4}, "�һ�������û����͵�ң����Ļ��������ڻ��¡�"}
	},
	{
		{41, "���˹�", 1, {0, 5}, "�������˶����ڹ��ֻ��С�����˯������һ����һ�㶼��������"},
		{42, "����", 1, {1, 5}, "��������ֻ�д���ƽ��ƽ����ô򽻵�!"},
		{43, "�ٻ���", 1, {2, 5}, "�ۣ�����̫���ˣ�����ĺܶ໨���в������֣�"},
		{44, "��ȸɽׯ", 1, {3, 5}, "�������̲����������͵Ĵ�ʽ������ӳ��ï�ܵ�ɭ��֮�У���ȸ���࿪�������񻶳�ӭ����÷��¹����Ϸˮ��������Ȼ��г���ڡ�"},
		{45, "��Ը�", 1, {4, 5}, "��������ʣ������ܽ����������ѣ��Ǵ𰸿϶�����Ըڡ��˵����ʯ��ᾡ���ݲ�������ȴ������Ӣ�ۻ�۵ĵط���"},
		{46, "������", 1, {5, 5}, "�����ã�����˼�壬ʮ�˰����������ȫ��������û����˵㸱ҵ���������ߡ�ҩ�裬�����߾����ˡ�"},
		{47, "��ϼ��ɲ", 1, {6, 5}, "��ϼ��ɲ����û�����ݷ����ܾ����������أ��������쳤̾��"},
		{48, "������", 1, {7, 5}, "����������ɭɭ�ġ��յ��ɹ���ģ�"}
	},
	{
		{49, "��żɽׯ", 1, {0, 6}, "��������żɽׯ���������ʲô�������������ط���Щ��ͬ������һ��ʮ���ر�ĵط�����֪��ׯ֮������ʲô���ڲ�ͬ�Ķ�����"},
		{50, "��ľ��", 1, {1, 6}, "��ľ�½���û�����������С�ͻȻ�䣬����һֻ�ڸ룬�����������¡�"},
		{51, "������", 1, {2, 6}, "Ϊ�κ������л�������ڶ�ĺ������ǲ�����Ϊ������ʲô���ɸ��˵����飿����ֻ����Ե�˲���֪���ˡ�"},
		{52, "������", 1, {3, 6}, "���ص��������������Ƿ�������������ǰ���ܶ档�Դӷ��������һ�ΰ���������������ʧ����ɱ���������һƬ���㡣���������������������������Ʒ�Ĺ�����"},
		{53, "������", 1, {4, 6}, "�����׼��������ｨ����Ψһ���������Ű���������׼һ�����Ӫ��"},
		{54, "�ص���", 1, {5, 6}, "һ���ص������ͻῴ��������ؤ�����������֣�����ʵ������ȴ��ϰ������������������"},
		{55, "����ׯ", 1, {6, 6}, "����ׯ���˶�������������ˡ�"},
		{56, "���깬", 1, {7, 6}, "���깬����û��������ꡣ�����С�������ģ�Ⱥ�е��۾���ѩ���ģ�ͷ���ؿ��������������ֵ������󱣽��ɣ�"}
	},
	{
		{57, "ʯ��", 1, {0, 7}, "���ʯ����ֻ��ʯͷ��ʯͷ��Ȼ�������ҷŵġ���ϧ��ʯͷ̫����ô�죿"},
		{58, "������", 1, {1, 7}, "�������￴��û�б��ˡ�ֻ��ֻ�Ϲ��㬵Ŀ��������ͷ����ʲô������"},
		{59, "�����", 1, {2, 7}, "�������û������ڣ�ȴ�������������ܣ�"},
		{60, "ͨ�Ե�", 1, {3, 7}, "ͨ�Ե���ֻ�С��˵�Σ�գ����ı��ԡ������֡�"},
		{61, "ͨ���", 1, {4, 7}, "һ������ͨͨ����ò�����ССͨ��ۣ������߶����Խ������档������һ�źܸߵĴ���������û�����ܹ�������������˵����ͨ��ġ�"},
		{62, "��ϼͤ", 1, {5, 7}, "��ϼͤ���ڿ��ţ�ͤ����һ���塣���Ӳ����巨��������ȴ���ã�"},
		{63, "������", 1, {6, 7}, "�������ǿտյ�����С����֡������ȥ�����˼Ҳ��á�"},
		{64, "���͵�", 1, {7, 7}, "���͵�û�����������񹦡�����Ʊ��Ů�Ӱ���������"}
	}
};

// ������ǰ��ұ���
Player *curr_player;

/** ��ʼ����Ϸ���� */
void init(void)
{
	// ���õ�ǰ��¼���Ĭ��Ϊ���1
	curr_player = &players[0];

	// ������ҵ����������ߺ�����
	curr_player->weapon = prop_array[0];
	curr_player->armor = prop_array[1];
	curr_player->martial = martials[10];
}

/** ��ʾȫ������ */
void show(void)
{
	// ��ȡ��������Ĵ�С
	int prop_count = sizeof(prop_array) / sizeof(Prop);
	int i, j;

	// ��ӡ����������Ϣ
	printf("���\t����\t\t�۸�\n");
	for (i = 0; i < prop_count; i++)
	{
		printf("%d\t%s\t%.0lf\n", prop_array[i].id, prop_array[i].name, prop_array[i].price);

		// ���ݵ������ʹ�ӡ
		switch (prop_array[i].type)
		{
			case weapon:       // ��������
				printf("��С��������%d\t��󹥻�����%d\n", prop_array[i].min_attack, prop_array[i].max_attack);
				break ;
			case armor:        // ��������
				printf("��С��������%d\t����������%d\n", prop_array[i].min_defense, prop_array[i].max_defense);
				break ;
			case consumables:  // ����Ʒ����
				printf("��С����ֵ��%d\t�������ֵ��%d\n", prop_array[i].min_power, prop_array[i].max_power);
				break ;
		}
	}

	printf("\n��ӡ��ͼ��Ϣ��\n");
	// �ⲿѭ��������
	for (i = 0; i < 8; i++)
	{
		// �ڲ�ѭ��������
		for (j = 0; j < 8; j++)
		{
			printf("%-10s", map_array[i][j].name);
		}
		printf("\n");
	}
}

/** ��ʾ��Ϸ��ӭ��Ϣ */
void show_welcome(void)
{
	// �ڵ�0�еĵ�MARGIN_X��ʼ��ӡ
	set_cursor_position(MARGIN_X, 0);
	printf("%s", SEP);

	// �ڵ�1�еĵ�MARGIN_X��ʼ��ӡ
	set_cursor_position(MARGIN_X, 1);
	printf("|");

	// �����ƶ�
	set_cursor_position(MARGIN_X + 28, 1);
	printf("��ӭ����Ц���������磡");  // ��Ϸ�������Ҳ����Ϊ����

	// �����ƶ�
	set_cursor_position(MARGIN_X + 77, 1);
	printf("|");

	// �ڵ�2�еĵ�MARGIN_X��ʼ��ӡ
	set_cursor_position(MARGIN_X, 2);
	printf("%s", SEP);
}

/** ��ʾ��Ϸ��ͼ */
void show_map(void)
{
	// Ҫ���ݵ�ǰ��ҵ���������ʾ��ͼ������
	int i, j;

	// ��ӡ��ͼ
	for (i = 0; i < 8; i++)
	{
		// �ƶ���ÿ�еĿ�ͷ
		set_cursor_position(MARGIN_X, MAP_START_Y + i);
		for (j = 0; j < 8; j++)
		{
			// ��ӡ��ͷ��|
			if (j == 0)
				printf("|   ");

			// ������ڵ�����
			if (i == Y && j == X)
			{
				// ���ĵ�ͼ���ֵ���ɫ�ͱ���ɫ
				set_color(5, 15);
			}
			printf("%-9s", map_array[i][j].name);
			set_color(10, 0);  // ��ӡ�������ͼ�󣬽���ɫ���Ĭ����ɫ
		}

		// �ƶ�����ĩ
		set_cursor_position(MARGIN_X + 77, MAP_START_Y + i);
		// ��ӡ��β��|
		printf("|");
	}

	// �ƶ�����ͼ����
	set_cursor_position(MARGIN_X, MAP_END_Y);
	// ��ӡ�ָ���
	printf(SEP);

	// ��ӡ��ǰ��ͼ��Ϣ
	show_map_info();
}

/** ����Ϣ������ʾ��ǰ��ͼ����Ϣ */
void show_map_info(void)
{
    // �����Ϣ������Ϣ
    clear_info(MARGIN_X, INFO_START_Y, 7);

    // ��ʾ��ǰ������ڵ�ͼ����Ϣ
    // ��ӡ��ǰ���ڵ�ͼ����
    set_cursor_position(MARGIN_X + 25, INFO_START_Y);
    printf("��ǰ������ڵ�ͼ����%s��", map_array[Y][X].name);

    // ��ӡ��ǰ���ڵ�ͼ����
    set_cursor_position(MARGIN_X + 10, INFO_START_Y + 1);
    // ��Ҫ����������ʾ����
    char *desc = map_array[Y][X].desc;  // �����ͼ���ܵ�ַ
    int desc_len = strlen(desc);        // ��ȡ��ͼ���ܳ���
    int i;

    // һ���ִ�ӡ
    for (i = 0; i < desc_len; i++)
	{
		// ����ÿ��ֻ�ܴ�ӡ60�������ַ�
		if (i != 0 && i % 60 == 0)
		{
			// ÿ�ν���������ƶ�һ���ֵľ���
			set_cursor_position(MARGIN_X + 10, INFO_START_Y + 1 + i / 60);
		}
		printf("%c", desc[i]);
	}
}

/** ��ʾ��Ϸ��ͼ�·�����Ϸ��Ϣ */
void show_information(void)
{
	int i;

	// �ƶ�����Ϣ�Ŀ�ͷ
	set_cursor_position(MARGIN_X, INFO_START_Y);

	// ��Ϣ����һ����7��
	for (i = 0; i < 7; i++)
	{
		// �ƶ���ÿ�еĿ�ͷ����ӡ|
		set_cursor_position(MARGIN_X, INFO_START_Y + i);
		printf("|");

		// �ƶ���ÿ�е�ĩβ����ӡ|
		set_cursor_position(MARGIN_X + 77, INFO_START_Y + i);
		printf("|");
	}
	// �ƶ�����Ϣ�����ӡ�ָ���
	set_cursor_position(MARGIN_X, INFO_END_Y);
	printf(SEP);
}

/** ��ʾ��Ϸ���˵� */
void show_main_menu(void)
{
	// �ƶ������˵��Ŀ�ͷ
	set_cursor_position(MARGIN_X, MAINMENU_START_Y);
	printf("��Ϸ�˵���");

	// ���������ƶ�����ӡ�˵�
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 1);
	printf("1����������");
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 2);
	printf("2�����ҹ���");
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 3);
	printf("3�����ܶ�");
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 4);
	printf("4������װ��");
}

/** ������Ϸ���˵���ҵ�� */
void process_main_menu(char key)
{
	// ����key��ֵ��ִ�в�ͬ�ĺ���
	switch (key)
	{
		case '1':  // ��������
			show_player_info();
			break ;
		case '2':  // ���ҹ���
			show_monsters();
			break ;
		case '3':  // ���ܶ�
			teleport(curr_player->martial.hq_coord.X, curr_player->martial.hq_coord.Y);
			break ;
		case '4':
			break ;
		case '5':
			break ;
	}
}

/** ����Ϣ������ʾ��ҵĸ������� */
void show_player_info(void)
{
	// �����Ϣ������Ϣ
	clear_info(MARGIN_X, INFO_START_Y, 7);

	// �ƶ���꿪ʼ��ӡ�����Ϣ
	// ��ӡ����
	set_cursor_position(MARGIN_X + 20, INFO_START_Y);
	printf("������%s���ĸ����������£�", curr_player->name);

	// ��ӡ������Ϣ
	set_cursor_position(MARGIN_X + 10, INFO_START_Y + 1);
	printf("�ȼ���%d\tѪ����%d\t������%d\t����ֵ��%d", curr_player->level, curr_player->hp, curr_player->mp, curr_player->exp);

	// ��ӡ�����ͷ�����Ϣ
	set_cursor_position(MARGIN_X + 10, INFO_START_Y + 2);
	printf("��ǰ������%s(%d/%d)\t", curr_player->weapon.name, curr_player->weapon.min_attack, curr_player->weapon.max_attack);
	printf("��ǰ���ߣ�%s(%d/%d)", curr_player->armor.name, curr_player->armor.min_defense, curr_player->armor.max_defense);

	/********************************************************/

	// �������������ʾ��ҵ�������Ϣ�Լ�������Ϣ
}

/** ����Ϣ������ʾ��ǰ��ͼ�Ĺ��� */
void show_monsters(void)
{
	// �������ȼ��ƺ�����
	char level_names[9][9] = {"���δ��", "����é®", "��ͨƤë", "����ſ�", "����С��", "�������", "�������", "�����޵�", "���˺�һ"};

	// �����Ϣ������Ϣ
	clear_info(MARGIN_X, INFO_START_Y, 7);

	// ��������
	int monster_count = sizeof(monster_array) / sizeof(Monster);

	int monster_index[9];            // ��ǰ��ͼ�����±����飨���һ����ʾ9����
	int curr_map_monster_count = 0;  // ��ǰ��ͼ�Ĺ�������
	int curr_monster_index;          // ��ǰ�����±�
	int i;

	// ���浱ǰ��ͼ���ŵĹ�����±�
	for (i = 0; i < monster_count; i++)
	{
		// ������������Ϊ��ǰ������꣬���ҹ����״̬Ϊ����
		if (monster_array[i].coord.X == X && monster_array[i].coord.Y == Y && monster_array[i].state != 0)
		{
			// ��������±꣬������ǰ��ͼ��������++
			monster_index[curr_map_monster_count] = i;
			curr_map_monster_count++;

			// �����ǰ��ͼ���������ﵽ9ֻ��ֹͣ����
			if (curr_map_monster_count == 9)
				break ;
		}
	}

	// �ƶ���겢��ӡ������Ϣ
	set_cursor_position(MARGIN_X + 10, INFO_START_Y);

	// �����ǰ��ͼû�й���
	if (curr_map_monster_count == 0)
	{
		printf("��ǰ��ͼ��������ģ�");
		return ;  // û�й������������
	}

	// ��ӡ������Ϣ
	printf("��ǰ��ͼ���������¹��");
	set_cursor_position(MARGIN_X + 5, INFO_START_Y + 2);
	for (i = 0; i < curr_map_monster_count; i++)
	{
		// ����ÿ�д�ӡ��������
		if (i != 0 && i % 3 == 0)
		{
			// �ƶ�������¸������ӡ����ʼλ��
			set_cursor_position(MARGIN_X + 5, INFO_START_Y + 2 + i / 3);
		}
		curr_monster_index = monster_index[i];  // ���浱ǰ�����±�
		printf("%d.%s(%s)\t", monster_array[monster_index[i]].id, monster_array[monster_index[i]].name, level_names[monster_array[curr_monster_index].level - 1]);
	}

	// �ƶ�����Ϣ����������
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// ���������ѡ��Ҫpk�Ĺ����ţ�����fight����
	int pk_monster_id = -1;

	printf("������Ҫ�����Ķ��󣺣���0���أ�");
	scanf("%d", &pk_monster_id);
	/**********************************
	* ע�⣺��Ҫ��֤�û�������
	* ���������
	**********************************/

	// ��ѡ��Ĺ���ս��
	fight(pk_monster_id);
}

/** pk����ķ��� */
void fight(int monster_id)
{
	int monster_index = -1;  // Ҫ���ҵĹ����±�

	// ��������
	int monster_count = sizeof(monster_array) / sizeof(Monster);
    int i;

    // ����Ҫpk�Ĺ���id
    for (i = 0; i < monster_count; i++)
	{
		// ����ҵ����򱣴�����±겢�˳�
		if (monster_id == monster_array[i].id)
		{
			monster_index = i;
			break ;
		}
	}

	// ������һ��
	clear_info(MARGIN_X, INFO_END_Y - 1, 1);

	// �ƶ�����Ϣ���ڵ������沢��ӡ��Ϣ
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// ������Ҫpk�Ĺ��ﲻ����
	if (monster_index == -1)
	{
		printf("ҪPK�Ĺ��ﲻ���ڣ��������������");
		return ;
	}

	// ����������
	int fight_rounds = 0;  // pk������
	while (1)
	{
		srand(time(NULL));

		// ��Һ͹��ﻥŹ��ͨ������������ɹ�����
        int player_attack;
        player_attack = rand() % (curr_player->weapon.max_attack - curr_player->weapon.min_attack + 1) + curr_player->weapon.min_attack;

        // ���ٹ���Ѫ�����������Ƿ�����
        monster_array[monster_index].hp -= player_attack;
        if (monster_array[monster_index].hp <= 0)
		{
			break ;  // ����������ս������
		}

		// ��ʱ������ҷ�����
		curr_player->hp -= monster_array[monster_index].att;

		// �������Ƿ�����
		if (curr_player->hp <= 0)
		{
			break ;  // ���������ս������
		}

		// ������һ��
		clear_info(MARGIN_X, INFO_END_Y - 1, 1);

		// �ƶ�����Ϣ���ڵ������沢��ӡ��Ϣ
		set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

        fight_rounds++;      // �����Ӽ�
        printf("ս����%d�֣�%sHP:%d\t%sHP:%d", fight_rounds, curr_player->name, curr_player->hp, monster_array[monster_index].name, monster_array[monster_index].hp);
        usleep(1000 * 200);  // ��ͣ200����
	}

	// ������һ��
	clear_info(MARGIN_X, INFO_END_Y - 1, 1);

	// �ƶ�����Ϣ���ڵ������沢��ӡ��Ϣ
	set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);

	// ����������������Ϸ����
	if (curr_player->hp <= 0)
	{
		// �ƶ���������һ�в���ӡ��Ϣ
		set_cursor_position(MARGIN_X + 5, INFO_END_Y - 1);
		printf("������Ѷ��������%s�����롶%s����ս����׳�������������������", curr_player->name, monster_array[monster_index].name);
		curr_player->hp = 10000;
		return ;
	}
	printf("��������ս������%s������ɱ�������%d���飬%d��ң�", monster_array[monster_index].name, monster_array[monster_index].exp, monster_array[monster_index].max_money);

	// ������ҵľ���ͽ�Ǯ
	curr_player->exp += monster_array[monster_index].exp;
	curr_player->gold += monster_array[monster_index].max_money;
}

/** ˲���ƶ����ƶ����� */
void teleport(int x, int y)
{
	// �ƶ��û���λ��
	Y = y;
	X = x;

	// ˢ�µ�ͼ
	show_map();
}