/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��3�� ��ʽ������/��� �����
 * 4.��дһ��������ʾ�û���(xxx) xxx-xxxx�ĸ�ʽ����绰���룬����xxx.xxx.xxxx�ĸ�ʽ��ʾ�ú��룺
	 Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
	 You entered 404.817.6900
 * 2020-07-11 16:23
 */

#include <stdio.h>

int main(void)
{	
	int first, middle, last;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf_s("(%d) %d-%d", &first, &middle, &last);
	printf("%d.%d.%d\n", first, middle, last);
	return 0;
}
