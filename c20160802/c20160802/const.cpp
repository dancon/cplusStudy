#include <iostream>

int main() {

	/**
	�������ã���������£����õ����ͱ���������õĶ��������һ�£������ڳ�ʼ���������õ�ʱ������ʹ��������ʽ��Ϊ�������õĳ�ʼֵ��ֻҪ���ʽ�Ľ���ܹ�ת�������õ����ͼ���
	*/
	int i = 42;
	const int &ri = i;
	std::cout << ri << std::endl;

	double dval = 3.14;
	const int &rint = dval; // ����dval��һ�����ʽ��double���Ϳ���ת��Ϊint�ͣ��ڳ�ʼ����������ʱ��������������һ����ʱ����������ʽ�Ľ����Ҳ����double����ת��Ϊint��ʱ�Ľ������������ĳ�������ʵ�������õ����ڴ��е���ʱ��
	std::cout << rint << std::endl;

	// ������ǳ������ã����޷�ʹ�ñ��ʽ��Ϊ��ʼ������
	try
	{
		double dval2 = 3.14;
		// int &rint1 = dval2; // ����ʱ����
	}
	catch (const std::exception&)
	{
		std::cerr << "ERROR" << std::endl;
	}

	// ����Ϊ�������ÿ����ɱ��ʽ����ʼ�����������ǿ��Լ�ӵ��޸ĳ������õ�ֵ
	int i1 = 23;
	int &riv = i1;
	const int &ri1 = i1;
	std::cout << ri1 << std::endl;

	// ͨ��ֱ���޸�i����i�ķǳ����������޸ĳ�������ri1��ֵ
	i1 = 24;
	std::cout << ri1 << std::endl;

	riv = 25;
	std::cout << ri1 << std::endl;

	std::getchar();
}