/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��2�� C���Ի������� �����
 * 8.��̼����һ���ڶ����������»�����ʣ��Ĵ����
 * 2020-07-05 18:23
 */

#include <stdio.h>

int main(void)
{
	float amount = 0, rate = 0, payment = 0; // �ܶ�����ʣ��¹�
	printf("��������ܶ");
	scanf_s("%f", &amount);
	printf("�������ʣ�%%����");
	scanf_s("%f", &rate);
	printf("�����¹���");
	scanf_s("%f", &payment);
	for (int i = 1; i <= 3; i++) {
		amount = amount * (1 + rate / 100 / 12) - payment;
		printf("��%d���»�����ʣ��Ĵ����%0.2f\n", i, amount);
	}
	return 0;
}