/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��2�� C���Ի������� �����
 * 6.�޸����⣬�����¹�ʽ�Զ���ʽ��ֵ��
	 ((((3x+2)x-5)x-1)x+7)x-6
 */

#include <stdio.h>

int main(void)
{
	double x, result;
	printf("������x��ֵ��");
	/* 1.scanf��������donble������ת��˵����"lf"��2.��scanf_s��������scanf����ȫ */
	scanf_s("%lf", &x);
	result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("((((3x+2)x-5)x-1)x+7)x-6=%0.2f", result);
	return 0;
}
