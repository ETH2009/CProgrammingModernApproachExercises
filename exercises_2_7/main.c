/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��2�� C���Ի������� �����
 * 7.��дһ������Ҫ���û�����һ������������Ȼ����ʾ����������ٵ�20��Ԫ��10��Ԫ��5��Ԫ��1��Ԫ�����
 * 2020-07-05 17:06
 */

#include <stdio.h>

int main(void)
{
	while (1) {
		int amount = 0;
		int bills20 = 0, bills10 = 0, bills5 = 0, bills1 = 0;
		printf("������һ��������(����0�˳�)��");
		scanf_s("%d", &amount);
		if (amount == 0) {
			break;
		}
		bills20 = amount / 20;
		amount = amount - bills20 * 20;
		bills10 = amount / 10;
		amount = amount - bills10 * 10;
		bills5 = amount / 5;
		bills1 = amount - bills5 * 5;
		printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", bills20, bills10, bills5, bills1);
	}
	return 0;
}