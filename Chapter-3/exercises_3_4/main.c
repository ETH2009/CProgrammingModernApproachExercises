/*
 * C语言程序设计现代方法 ——第二版——
 * 第3章 格式化输入/输出 编程题
 * 4.编写一个程序，提示用户以(xxx) xxx-xxxx的格式输入电话号码，并以xxx.xxx.xxxx的格式显示该号码：
	 Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
	 You entered 404.817.6900
 * 2020-07-11 16:23
 */

#include <stdio.h>

int main(void)
{	
	int first, middle, last;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf_s("(%d) %d-%d", &first, &middle, &last);
	printf("%d.%d.%d\n", first, middle, last);
	return 0;
}
