/*
 * C语言程序设计现代方法 ——第二版——
 * 第2章 C语言基本概念 编程题
 * 4.编写一个程序，要求用户输入一个美元数量，然后显示出增加5%税率后的相应金额。
 */

#include <stdio.h>

int main(void)
{
	float amount;
	printf("Enter an amount: ");
	scanf("%f", &amount);
	printf("With tax added: $%0.2f", amount * (1 + 0.05));
}
