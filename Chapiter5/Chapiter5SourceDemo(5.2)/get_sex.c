#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ѭ��¼���û��Ա�ֻ��ʹ���ַ�m/M���У���f/F��Ů����
	// һ��������󣬽���¼��

	char sex;       // �����Ա��ַ�
	int count = 0;  // ����¼����ȷ�Ĵ���

	while (1)
	{
		printf("�������Ա��ַ���");
		scanf("%c", &sex);
		// sex = getchar();  // ����ʹ��scanf����getchar
		fflush (stdin);      // �ǵ���ջ��������������

		// ��������Ƿ�Ϊ�Ϸ��ַ�
		if (sex != 'm' && sex != 'M' && sex != 'f' && sex != 'F')
		{
			break;
		}
		count++;
	}
	printf("һ��¼�����Ϊ��%d", count);

	return (0);
}
