/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��2�� C���Ի������� �����
 * 5.Ҫ���û�����x��ֵ��Ȼ����ʾ���¶���ʽ��ֵ��
     3x^5+2x^4-5x^3-x^2+7x-6
 */

#include <stdio.h>
#include "./tools.h"

int main(void) 
{
	double x, result;
	printf("������x��ֵ��");
	scanf_s("%lf", &x);
	result = (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - x * x + 7 * x - 6;
	printf("3x^5+2x^4-5x^3-x^2+7x-6=%0.2lf", result);
}