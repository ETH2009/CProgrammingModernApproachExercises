/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��2�� C���Ի������� �����
 * 1.��дһ������ʹ��printf����Ļ����ʾ�����ͼ�Σ�
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

