#include <iostream>
#include <string>
using namespace std;

// 表达式学习
int main() {
	// 大多数运算符没有求值顺序，一般情况下不会有什么问题，但是当在一个复合表达式中，其中的一条子表达式修改了某个运算对象的值，而另外一条子表达式又会使用这个运算对象，这时候求值顺序就比较重要了
	
	string s = "Hello, something!";
	
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
		*it = toupper(*it);
	}
	cout << s << endl;

	// 换另外一种写法
	auto beg = s.begin();
	//while (beg != s.end() && !isspace(*beg)) {
	//	// *beg = toupper(*beg++); // 在这条赋值表达式中右侧运算使用++修改了beg指向位置，导致赋值运算的左值与预期不同，最终导致错误
	//}
	cout << "while: " << s << endl;

	// 点运算符和箭头运算符
	// 点运算符作用于类对象，用来访问类对象成员，箭头运算符作用域指针类型，解引用后访问对象成员

	string str = "this is a test string", *p = &str;
	auto size = str.size();
	size = (*p).size();
	size = p->size();

	// 条件运算?:的优先级特别低，所以在复合表达式中一定要加括号
	int grade = 90;
	cout << ((grade < 60) ? "fail" : "pass") << endl;  // 输出pass
	cout << (grade < 60) ? "fail" : "pass"; // 输出0
	// cout << grade < 60 ? "fail" : "pass";  // 编译报错

	// sizeof 运算符对一个类型求值时，应该将为类型加个括号（表达式），sizeof返回字节数
	auto intSize = sizeof (int);
	cout << "int 类型的大小：" << intSize << endl;

	cout << "str的大小是：" << sizeof str << endl;

	getchar();
}