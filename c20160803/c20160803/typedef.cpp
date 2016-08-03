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

	std::cout << "-----------auto������ϰ--------------------" << std::endl;
	// auto������C++11�������ԣ���������һ�������ɱ��ʽ�������������ı��������ñ��ʽ�Ľ������ʼ���ñ���������auto���͵ı��������ʼ��
	//auto av; // c3531 ���Ͱ���auto�ķ��ű�����г�ʼֵ�趨��
	
	// ����Ϊauto���͵ı�����ֵ��ʱ��auto���������������õĶ���������
	int i1 = 0, &ri1 = i1;
	auto av = ri1;
	std::cout << av << std::endl;

	// auto����Զ���const
	const int bi = i1, &cr = bi;
	auto b = bi;  // ��ʱb��int���ͣ�������int��������Ϊauto�����˶���const
	std::cout << b << std::endl;
	b = 5;
	std::cout << b << std::endl;
	auto c = cr; // ͬ��
	std::cout << c << std::endl;

	// auto���͵����ûᱣ������const
	auto &h = bi; // ��ʱh��int����
	std::cout << h << std::endl;
	// h = 5; // c3892 ���ܸ�������ֵ

	std::cout << "--------------------------decltype��ϰ--------------------------" << std::endl;
	// decltypeҲ��c++11�������ԣ���auto���ƣ�ֻ��ʹ�ñ��ʽ���������ƶ϶�����������ͣ�����ȴ���ñ��ʽ�Ľ������ֵ
	// decltype������Զ���const
	int i3 = 6, *p2 = &i3;
	// decltype(*p2) dv;  // ͨ��decltype����ָ�뷵�ص����������ͣ���������dv��int ���ã������ʼ��
	decltype(*p2) dv = i3;
	std::cout << dv << std::endl;

	int &r3 = i3;
	decltype(r3 + 1) dv1 = 5; // ����dv3��int��
	std::cout << dv1 << std::endl;

	// ��ϰ
	int e = 3, f = 4;
	decltype(e)g = e;
	decltype((f)) j = e;
	decltype(e = f) k = f; // ��ֵ������������
	++g;
	++j;
	++k;
	std::cout << e << ":" << g << ":" << j << ":" << f << ":" << k << std::endl;

	std::getchar();
}