#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// �������ú�����0��ʾ�٣���0��ʾ��
	printf("%d\n",isupper('a'));  // isupper: �Ƿ�Ϊ��д��ĸ
	printf("%d\n",islower('a'));  // islower���Ƿ�ΪСд��ĸ
	printf("%d\n",isalpha(97));   // isalpha�������ַ��Ƿ�Ϊ��ĸ

	// �������������֣����ʾ����ASCII��
	printf("%d\n",isdigit(50));   // �Ƿ�Ϊ����

	// ת����Сд��ֻ��ת����ĸ
	printf("��д��a��%c\n", toupper('a'));
	printf("��д��9��%c\n", toupper('9'));

	return (0);
}
