/*
 * C语言程序设计现代方法 ——第二版——
 * 第2章 C语言基本概念 编程题
 * 3.修改上题中的程序，使用户可以自行录入球体的半径。
 */

#include <stdio.h>

int main(void)
{
	double v, pi = 3.1415926;
	float r;
	printf("请输入球体的半径（单位m）：");
	scanf("%f", &r);
	v = 4.0f / 3.0f * pi * r * r * r;
	printf("球体体积是%0.2f立方米。", v);
}