/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��2�� C���Ի������� �����
 * 4.��дһ������Ҫ���û�����һ����Ԫ������Ȼ����ʾ������5%˰�ʺ����Ӧ��
 */

#include <stdio.h>

int main(void)
{
	float amount;
	printf("Enter an amount: ");
	scanf("%f", &amount);
	printf("With tax added: $%0.2f", amount * (1 + 0.05));
}
