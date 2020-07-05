/*
 * C语言程序设计现代方法 ——第二版——
 * 第2章 C语言基本概念 编程题
 * 7.编写一个程序，要求用户输入一个美金数量，然后显示出如何用最少的20美元、10美元、5美元和1美元来付款。
 * 2020-07-05 17:06
 */

#include <stdio.h>

int main(void)
{
	while (1) {
		int amount = 0;
		int bills20 = 0, bills10 = 0, bills5 = 0, bills1 = 0;
		printf("请输入一个美金金额(输入0退出)：");
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