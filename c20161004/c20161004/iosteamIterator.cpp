#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
	
	// 构建一个与 cin 关联的迭代器
	//istream_iterator<int> in(cin), eof;

	//cout << endl << "和为：" << accumulate(in, eof, 0) << endl;

	// 构建一个与 cout 关联的迭代器
	vector<int> vi = { 1, 3, 5, 8, 9, 10 };
	ostream_iterator<int> out(cout, " ");

	// 对 ostream_iterator 执行解引用和递增和递减运算并不会对 cout 产生任何作用，所以可以直接给迭代器赋值。
	for (auto e : vi) {
		out = e;
	}
	cout << endl;

	// 可以通过 copy 方法来打印序列中的内容
	cout << "通过 copy 算法打印：" << endl;
	copy(vi.begin(), vi.end(), out);
	cout << "打印结束" << endl;

	getchar();
}