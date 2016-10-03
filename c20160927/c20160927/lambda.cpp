#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int main() {
	vector<string> vec;
	size_t sz = 6;
	string strArr[] = {"Hello", "worlds", "I", "Love", "you"};

	// 通过 copy 方法将数组 strArr 中的元素赋值到 vec 中， 通过 back_inserter 返回的迭代器赋值的时候，会调用容器的 push_back 方法
	copy(begin(strArr), end(strArr), back_inserter(vec));

	auto b = vec.begin();

	while (b != vec.end()) {
		cout << *b << " ";
		b++;
	}
	cout << endl;

	// 通过 lambda 表达式捕获当前作用域的变量 sz
	auto index = find_if(vec.begin(), vec.end(), [sz](const string &a) {
		return a.size() >= sz;
	});

	cout << *index << endl;
	getchar();
}