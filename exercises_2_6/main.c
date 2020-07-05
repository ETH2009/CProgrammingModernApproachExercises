/*
 * C语言程序设计现代方法 ——第二版——
 * 第2章 C语言基本概念 编程题
 * 6.修改上题，用如下公式对多项式求值：
	 ((((3x+2)x-5)x-1)x+7)x-6
 */

#include <stdio.h>

int main(void)
{
	double x, result;
	printf("请输入x的值：");
	/* 1.scanf函数读入donble类型用转换说明符"lf"；2.用scanf_s函数代替scanf更安全 */
	scanf_s("%lf", &x);
	result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("((((3x+2)x-5)x-1)x+7)x-6=%0.2f", result);
	return 0;
}
