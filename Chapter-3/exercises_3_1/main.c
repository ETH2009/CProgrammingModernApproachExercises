/*
 * C语言程序设计现代方法 ——第二版——
 * 第3章 格式化输入/输出 编程题
 * 1.编写一个程序，以月/日/年（即mm/dd/yy）的格式接受用户录入的日期信息，并以年月日（即yyyymmdd）的格式将其显示出来:
     Enter a date (mm/dd/yyyy): 2/17/2011
     You entered the date 20110217
 * 2020-07-05 21:53
 */

#include <stdio.h>

int main(void)
{
	int year, month, day;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf_s(" %d / %d / %d", &month, &day, &year);
	printf("You entered the date %04d%02d%02d", year, month, day);
	return 0;
}
