/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��3�� ��ʽ������/��� �����
 * 1.��дһ����������/��/�꣨��mm/dd/yy���ĸ�ʽ�����û�¼���������Ϣ�����������գ���yyyymmdd���ĸ�ʽ������ʾ����:
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
