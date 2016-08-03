#include <iostream>

int main() {

	// 类型别名
	// 传统的定义类型别名的方法是使用typedef来声明
	typedef double dl;

	dl pi = 3.14;
	std::cout << pi << std::endl;

	// c++11标准中可以使用using来声明
	using in = int;
	in i = 3;
	std::cout << i << std::endl;

	// 如果类型别名代之的是指针或者引用等复合类型时， 把别名用于变量声明中时编译器是以别名所指的类型为单位来解析的，也就是说，类型别名也成为了声明符中的一中类型
	typedef const int *ci;
	int cival = 2;  // 定义一个int型变量
	const ci p = &cival; // 这里 ci是一个指向常量int的指针类型， const ci 就是指向int的常量指针，把ci作为一种类型，从右往左解析，而不应该把ci所指的类型替换后再解析
	std::cout << p << ":" << *p << std::endl;
	int i2 = 5;
	// p = &i2; // 因为p是一个常量指针，一旦初始化后，p的值就不能改变，所以这句是非法的赋值 c3892:不能给常量赋值

	std::getchar();
}