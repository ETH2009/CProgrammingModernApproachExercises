/*
 * C语言程序设计现代方法 ——第二版——
 * 第3章 格式化输入/输出 编程题
 * 5.编写一个程序，要求用户（按任意次序）输入从1到16的所有整数，然后用4×4矩阵的形式将它们显示出来，再计算出每行、每列和每条对角线上的和：
	 Enter the numbers from 1 to 16 in any order:
	 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
	 16   3   2   13
	 5  10  11    8
	 9   6   7   12
	 4  15  14    1

	 Row sums: 34 34 34 34
	 Column sums: 34 34 34 34
	 Diagonal sums: 34 34
 * 2020-07-12 19:14
 */

#include <stdio.h>

int main(void)
{
	int nums[16];
	int row_sums[4] = { 0 }, col_sums[4] = { 0 }, diag_sums[2] = { 0 };
	printf("Enter the numbers from 1 to 16 in any order: ");
	for (int i = 0; i < 16; i++) {
		scanf_s("%d", nums + i);
	}
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 4; col++) {
			int index = 4 * row + col;
			int num = nums[index];
			printf("%2d\t", nums[index]);
			row_sums[row] += num;
			col_sums[col] += num;
			if (row == col) {
				diag_sums[0] += num;
			}
			if (row + col == 3) {
				diag_sums[1] += num;
			}
		}
		printf("\n");
	}
	printf("\nRow sums: %d %d %d %d\n", row_sums[0], row_sums[1], row_sums[2], row_sums[3]);
	printf("Column sums: %d %d %d %d\n", col_sums[0], col_sums[1], col_sums[2], col_sums[3]);
	printf("Diagonal sums: %d %d\n", diag_sums[0], diag_sums[1]);
	return 0;
}