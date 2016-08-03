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

	std::cout << "-----------auto类型练习--------------------" << std::endl;
	// auto类型是C++11的新特性，用来声明一个类型由表达式计算结果来决定的变量，并用表达式的结果来初始化该变量。所以auto类型的变量必须初始化
	//auto av; // c3531 类型包含auto的符号必须具有初始值设定项
	
	// 引用为auto类型的变量赋值的时候，auto变量的类型由引用的对象来决定
	int i1 = 0, &ri1 = i1;
	auto av = ri1;
	std::cout << av << std::endl;

	// auto会忽略顶层const
	const int bi = i1, &cr = bi;
	auto b = bi;  // 此时b是int类型，而不是int常量，因为auto忽略了顶层const
	std::cout << b << std::endl;
	b = 5;
	std::cout << b << std::endl;
	auto c = cr; // 同理
	std::cout << c << std::endl;

	// auto类型的引用会保留顶层const
	auto &h = bi; // 此时h是int常量
	std::cout << h << std::endl;
	// h = 5; // c3892 不能给常量赋值

	std::cout << "--------------------------decltype练习--------------------------" << std::endl;
	// decltype也是c++11的新特性，与auto类似，只是使用表达式的类型来推断定义变量的类型，但是却不用表达式的结果来赋值
	// decltype不会忽略顶层const
	int i3 = 6, *p2 = &i3;
	// decltype(*p2) dv;  // 通过decltype来解指针返回的是引用类型，所以这里dv是int 引用，必须初始化
	decltype(*p2) dv = i3;
	std::cout << dv << std::endl;

	int &r3 = i3;
	decltype(r3 + 1) dv1 = 5; // 这里dv3是int型
	std::cout << dv1 << std::endl;

	// 练习
	int e = 3, f = 4;
	decltype(e)g = e;
	decltype((f)) j = e;
	decltype(e = f) k = f; // 赋值返回引用类型
	++g;
	++j;
	++k;
	std::cout << e << ":" << g << ":" << j << ":" << f << ":" << k << std::endl;

	std::getchar();
}