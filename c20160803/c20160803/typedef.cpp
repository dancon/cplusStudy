#include <iostream>

int main() {

	// ���ͱ���
	// ��ͳ�Ķ������ͱ����ķ�����ʹ��typedef������
	typedef double dl;

	dl pi = 3.14;
	std::cout << pi << std::endl;

	// c++11��׼�п���ʹ��using������
	using in = int;
	in i = 3;
	std::cout << i << std::endl;

	// ������ͱ�����֮����ָ��������õȸ�������ʱ�� �ѱ������ڱ���������ʱ���������Ա�����ָ������Ϊ��λ�������ģ�Ҳ����˵�����ͱ���Ҳ��Ϊ���������е�һ������
	typedef const int *ci;
	int cival = 2;  // ����һ��int�ͱ���
	const ci p = &cival; // ���� ci��һ��ָ����int��ָ�����ͣ� const ci ����ָ��int�ĳ���ָ�룬��ci��Ϊһ�����ͣ������������������Ӧ�ð�ci��ָ�������滻���ٽ���
	std::cout << p << ":" << *p << std::endl;
	int i2 = 5;
	// p = &i2; // ��Ϊp��һ������ָ�룬һ����ʼ����p��ֵ�Ͳ��ܸı䣬��������ǷǷ��ĸ�ֵ c3892:���ܸ�������ֵ

	std::getchar();
}