/*
 * C语言程序设计现代方法 ——第二版——
 * 第2章 C语言基本概念 编程题
 * 1.编写一个程序，使用printf在屏幕上显示下面的图形：
            *
		   *
		  *
	 *   *
      * *
       *
 */

#include <stdio.h>

int main(void)
{
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 7 - i; j++) {
			if (j == 7 - i)
				printf("*\n");
			else if (i >= 3 && j == i - 3)
				printf("*");
			else 
				printf(" ");
		}
	}
	return 0;
}

