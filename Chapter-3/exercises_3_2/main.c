/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��3�� ��ʽ������/��� �����
 * 2.��дһ�����򣬶��û�¼��Ĳ�Ʒ��Ϣ���и�ʽ��������ỰӦ��������������
     Enter item number: 583
     Enter unit price: 13.5
	 Enter purchase date (mm/dd/yyyy): 7/5/2020
	 Item    Unit            Purchase
			 Price           Date
	 583     $ 13.50         07/05/2020
 * 2020-07-05 22��33
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