#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> vcint = { 0, 1, 2, 3, 4};
	string str = "Hello, VC++";

	// 通过迭代器来显示vcint的值
	// 我们可以理解迭代器返回的是指向容器元素的一个指针，实际迭代器返回的是vector::iterator类型的对象
	for (auto it = vcint.begin(); it != vcint.end(); it ++) {
		cout << *it /* 需要解指针来返回对应位置元素的值 */<< " ";
	}
	cout << endl;
	char c = 'A';
	cout << c << endl;
	for (string::iterator it = str.begin(); it != str.end(); it ++) {
		if (isalpha(*it)) {
			*it = toupper(*it);
			cout << *it;
			// 直接输出toupper(*it) 打印的是ASCII码
		}
	}
	cout << endl;

	// 迭代器运算
	cout << vcint.begin() - vcint.end() << endl;

	// 输出第4个元素的值
	cout << *(vcint.begin() + 3) << endl;

	vector<int>::iterator it = vcint.begin() + 4;

	cout << vcint.end() - it << endl;

	cout << (it < vcint.end()) << endl;

	getchar();
}