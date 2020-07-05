/*
 * C语言程序设计现代方法 ——第二版——
 * 第3章 格式化输入/输出 编程题
 * 2.编写一个程序，对用户录入的产品信息进行格式化。程序会话应类似下面这样：
     Enter item number: 583
     Enter unit price: 13.5
	 Enter purchase date (mm/dd/yyyy): 7/5/2020
	 Item    Unit            Purchase
			 Price           Date
	 583     $ 13.50         07/05/2020
 * 2020-07-05 22：33
 */

#include <stdio.h>

int main(void)
{
	unsigned int number, year, month, day;
	float price;
	printf("Enter item number: ");
	scanf_s("%d", &number);
	printf("Enter unit price: ");
	scanf_s("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf_s("%d/%d/%d", &month, &day, &year);
	printf("\nItem\tUnit\t\tPurchase\n");
	printf("\tPrice\t\tDate\n");
	printf("%d\t$ %-0.2f\t\t%02d/%02d/%04d\n", number, price, month, day, year);
	return 0;
}