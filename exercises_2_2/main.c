/*
 * C语言程序设计现代方法 ——第二版——
 * 第2章 C语言基本概念 编程题
 * 2.编写一个计算球体体积的程序，其中球体的半径为10m，参考公式v = 4/3Πr^3。
 */

#include <stdio.h>

int main(void)
{
	double pi = 3.1415926;
	int r = 10;
	float v;
	v = 4.0f / 3.0f * pi * r * r * r;
	printf("球体体积是%0.2f立方米。", v);
}
