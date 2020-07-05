/*
 * C语言程序设计现代方法 ——第二版——
 * 第2章 C语言基本概念 编程题
 * 5.要求用户输入x的值，然后显示如下多项式的值：
     3x^5+2x^4-5x^3-x^2+7x-6
 */

#include <stdio.h>
#include "./tools.h"

int main(void) 
{
	double x, result;
	printf("请输入x的值：");
	scanf_s("%lf", &x);
	result = (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - x * x + 7 * x - 6;
	printf("3x^5+2x^4-5x^3-x^2+7x-6=%0.2lf", result);
}