#include <iostream>
#include <string>
#include <vector> // 使用vector必须引入vector.h
using namespace std;

int main() {
	// vector是一个类模板，vector对象可以用来容纳指定类型的对象

	// vector对象的定义和初始化
	vector<int> vcint;  // 定义了一个用来存放int类型的vector空对象

	vector<string> vcstr(3, "a"); // 定义了一个长度为3的vector对象，并vector对象中的每个元素初始化为a

	// 列表初始化
	vector<string> vcstr1{"a", "b", "c"}; // 定义并初始化vector对象中的每个元素的值为"a", "b", "c", 这种写法也等价于
	
	vector<string> vcstr2 = { "a", "b", "c" };

	for (int i = 0; i < 100; i ++) {
		vcint.push_back(i);  // 通过push_back类成员函数来为空vector添加元素
	}

	vcint[9] = 89; // 可以通过索引来访问vector中的元素，索引访问返回的是元素的引用，所以可以重新赋值
	// Note: 不可以通过索引为空的vector对象添加元素
	cout << "vcint 中的第10个元素的值为：" << vcint[9] << endl;

	// vector 的其他操作
	// 检测是否为空
	cout << "vcint 是否为空：" << vcint.empty() << endl;

	// 检测vector的大小
	cout << "vcint 的元素个数：" << vcint.size() << endl;

	// 弹出vcint中的尾元素
	vcint.pop_back();
	cout << "弹出一个元素后vcint的大小：" << vcint.size() << "最后一个元素是：" << *(vcint.end() - 1) << endl;

	getchar();
}