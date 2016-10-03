#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	size_t v1 = 42;
	// 如果要修改一个值捕获的变量的值，需要在参数列表前加 mutable 关键字
	// 如果不加编译时出错
	auto fn = [v1]()mutable {
		return ++v1;
	};

	auto rtn = fn();

	cout << "执行的结果是：" << rtn << " v1 = " << v1 << endl;

	auto fn2 = [&v1] {
		v1++;
	};

	fn2();
	cout << "v1 = " << v1 << endl;

	vector<int> vi = { 2, -3, 4, 8, -23 };

	// lambda 的捕获列表只是用来捕获所在函数的局部变量，lambda 的函数体可以访问到所在函数体作用域外边的变量和静态局部变量。
	auto fn3 = [](const int &s) {
		cout << s << " ";
	};

	cout << "修改前：" << endl;

	for_each(vi.begin(), vi.end(), fn3);
	cout << endl;

	// 如果lambda 函数体中包含了 return 之外的其他语句，则默认返回 void , 可以通过位置返回来指定返回类型。
	transform(vi.begin(), vi.end(), vi.begin(), [](int i) -> int {
		if (i < 0) {
			return -i;
		}
		else {
			return i;
		}
	});

	cout << "修改后：" << endl;
	for_each(vi.begin(), vi.end(), fn3);
	getchar();
}