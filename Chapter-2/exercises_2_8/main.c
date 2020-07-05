/*
 * C语言程序设计现代方法 ——第二版——
 * 第2章 C语言基本概念 编程题
 * 8.编程计算第一、第二、第三个月还贷后剩余的贷款金额。
 * 2020-07-05 18:23
 */

#include <stdio.h>

int main(void)
{
	float amount = 0, rate = 0, payment = 0; // 总额，月利率，月供
	printf("输入贷款总额：");
	scanf_s("%f", &amount);
	printf("输入利率（%%）：");
	scanf_s("%f", &rate);
	printf("输入月供金额：");
	scanf_s("%f", &payment);
	for (int i = 1; i <= 3; i++) {
		amount = amount * (1 + rate / 100 / 12) - payment;
		printf("第%d个月还贷后剩余的贷款金额：%0.2f\n", i, amount);
	}
	return 0;
}