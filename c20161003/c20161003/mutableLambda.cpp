#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;
using namespace std::placeholders;

// bind 参数
bool check_size(const string &s, string::size_type sz) {
	return s.size() >= sz;
}

// 绑定 参数引用
ostream &print(ostream &os, const string &s, char c) {
	return os << s << c;
}
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
	cout << endl;

	// bind
	size_t sz1 = 6;

	// 绑定函数参数的占位符 _1 都是定义在 std 命名空间的 placeholders 中
	auto check = bind(check_size, _1, sz1);
	vector<string> vs = { "hello", "this", "is", "a", "beautiful", "world" };
	auto index = find_if(vs.begin(), vs.end(), check);

	cout << "长度大于" << sz1 << "的字符是：" << *index << endl;

	// 绑定引用
	// 当使用 bind 方法绑定一个变量的引用的时候，必须使用 ref 来进行转换
	for_each(vs.begin(), vs.end(), bind(print, ref(cout), _1, ' '));
	getchar();
}