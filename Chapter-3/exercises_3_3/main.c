/*
 * C���Գ�������ִ����� �����ڶ��桪��
 * ��3�� ��ʽ������/��� �����
 * 3.ͼ���ù��ʱ�׼��ţ�ISBN�����б�ʶ��2007��1��1��֮������ISBN����13λ���֣��ɵ�ISBNʹ��10λ���֣�����Ϊ5�飬��978-0-393-97950-3��
	 ��һ�飨GS1ǰ׺��ĿǰΪ978��979��
	 �ڶ��飨���ʶ��ָ�����Ի���ԭ���������0��1���ڽ�Ӣ��Ĺ��ң���
	 �����飨�����̱�ţ���ʾ�����̣�393��W. W. Norton������ı�ţ���
	 �����飨��Ʒ��ţ����ɳ����̷��������ʶ�������һ����ģ�97950����
	 ISBN��ĩβ��һ��У�����֣�������֤ǰ�����ֵ�׼ȷ�ԡ���дһ���������ֽ��û�¼���ISBN��Ϣ��
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
