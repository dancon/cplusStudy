#ifndef SALES_DATA_H  // Ԥ�������������������ظ�����ͷ�ļ������³������������� SALES_DATA_H��һ��Ԥ�����������ʵû��ʲôʵ�����壬����һ���������ù�ͷ�ļ��ı�ʶ
#define SALES_DATA_H  // ����Ԥ�������
#include <string>
struct Sales_data  // ����ṹ��
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif // !1
