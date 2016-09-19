#include <array>
#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

void printContainer(vector<string> vec) {
	auto b = vec.begin(), e = vec.end();
	while (b != e) {
		cout << *b << " ";
		b++;
	}
	cout << endl;
}

int main() {
	// 内置数组不可以用来赋值或拷贝，标准库 array 没有这样的限制， 但是和内置的数组一样，数组的长度也是类型的一部分

	array<int, 10> arr1;  // 在函数内部，arr1 不会被默认初始化，只有在函数外部才会初始

	// 我们可以通过值列表来初始化 array 对象
	arr1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	array<int, 10> arr2 = arr1; // 把 arr1 的元素拷贝赋值给 arr2 中的每个元素

	auto b = arr1.begin();
	array<int, 10>::iterator e = arr1.end();

	while (b != e) {
		cout << *b << endl;
		b++;
	}

	cout << "arr2 的值" << endl;
	auto b1 = arr2.begin(), e1 = arr2.end();
	while (b1 != e1) {
		cout << *b1 << endl;
		b1++;
	};

	// 顺序容器的 assign 成员方法
	// 赋值运算符要求左右两边的变量的类型一致，但是 assign 方法打破了这一限制
	list<string> names;
	vector<const char*> oldStyles = { "a", "an", "this" };
	names.assign(oldStyles.begin(), oldStyles.end());
	cout << "list<string> names 的长度是：" << names.size() << endl;
	auto b2 = names.begin(), e2 = names.end();
	while (b2 != e2){
		cout << *b2 << endl;
		b2++;
	}

	// 通过 assign 的重载函数修改容器中的值
	names.assign(10, "hiYa");
	cout << "names 的长度是：" << names.size() << " 值是：" << *names.begin() << endl;

	// 顺序容器的 swap 成员方法
	// swap 用来交换两个相同类型的容器的内容, 除 string 外，交换后对容器的指针，引用，迭代器都生效

	vector<string> sec1 = { "I", "am", "a", "boy!" },
		sec2 = {"You", "are", "a", "girl"};

	auto it = sec1.begin() + 1;
	cout << "交换前：" << endl;
	cout << "sec1 的内容：" << endl;
	printContainer(sec1);
	cout << "sec2 的内容：" << endl;
	printContainer(sec2);
	cout << "it 的值： " << *it << endl;

	sec1.swap(sec2);
	cout << "交换后：" << endl;
	cout << "sec1 的内容：" << endl;
	printContainer(sec1);
	cout << "sec2 的内容：" << endl;
	printContainer(sec2);
	cout << "it 的值" << *it << endl;

	string str1 = "aaaa";
	string str2 = "bbbb";
	auto itstr = str1.begin();
	cout << "string 迭代器：" << *itstr << endl;
	
	// swap(str1, str2); // 执行 swap 后 itstr 将会产生运行时错误
	cout << "string 交换：" << *itstr << endl;

	// array 交换后 迭代器指向的是同一个元素，只是元素的值变了，因为对 array 执行 swap 会真实的更换元素的值
	array<string, 1> a1 = { "a" };
	array<string, 1> a2 = { "b" };
	auto itarr = a1.begin();
	cout << "itarr：" << *itarr << endl;
	swap(a1, a2);
	cout << "itarr 交换：" << *itarr << endl;

	getchar();
}