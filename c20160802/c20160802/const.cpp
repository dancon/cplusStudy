#include <iostream>

int main() {

	/**
	常量引用，正常情况下，引用的类型必须和所引用的对象的类型一致，但是在初始化常量引用的时候，允许使用任意表达式作为常量引用的初始值，只要表达式的结果能够转换成引用的类型即可
	*/
	int i = 42;
	const int &ri = i;
	std::cout << ri << std::endl;

	double dval = 3.14;
	const int &rint = dval; // 这里dval是一个表达式，double类型可以转换为int型，在初始化常量引用时，编译器会生成一个临时量来保存表达式的结果，也就是double类型转换为int型时的结果，所以这里的常量引用实际上引用的是内存中的临时量
	std::cout << rint << std::endl;

	// 如果不是常量引用，就无法使用表达式来为初始化引用
	try
	{
		double dval2 = 3.14;
		// int &rint1 = dval2; // 编译时报错
	}
	catch (const std::exception&)
	{
		std::cerr << "ERROR" << std::endl;
	}

	// 正因为常量引用可以由表达式来初始化，所以我们可以间接的修改常量引用的值
	int i1 = 23;
	int &riv = i1;
	const int &ri1 = i1;
	std::cout << ri1 << std::endl;

	// 通过直接修改i或者i的非常量引用来修改常量引用ri1的值
	i1 = 24;
	std::cout << ri1 << std::endl;

	riv = 25;
	std::cout << ri1 << std::endl;

	std::getchar();
}