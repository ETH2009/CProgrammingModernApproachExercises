/*
 * C语言程序设计现代方法 ——第二版——
 * 第3章 格式化输入/输出 编程题
 * 3.图书用国际标准书号（ISBN）进行标识。2007年1月1日之后分配的ISBN包含13位数字（旧的ISBN使用10位数字），分为5组，如978-0-393-97950-3。
	 第一组（GS1前缀）目前为978或979。
	 第二组（组标识）指明语言或者原出版国（如0和1用于讲英语的国家）。
	 第三组（出版商编号）表示出版商（393是W. W. Norton出版社的编号）。
	 第四组（产品编号）是由出版商分配的用于识别具体哪一本书的（97950）。
	 ISBN的末尾是一个校验数字，用于验证前面数字的准确性。编写一个程序来分解用户录入的ISBN信息：
		Enter ISBN: 978-0-393-97950-3
		GS1 prefix: 978
		Group identifier: 0
		Publisher code: 393
		Item number: 97950
		Check digit: 3
 * 2020-07-11 16:00
 */

#include <stdio.h>

int main(void)
{
	int prefix, identifier, code, number, check_digit;
	printf("Enter ISBN: ");
	scanf_s("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &number, &check_digit);
	printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", prefix, identifier, code, number, check_digit);
	return 0;
}
