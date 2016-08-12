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
}