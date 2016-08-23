#include <iostream>
#include <string>
#include "func.h"
using namespace std;

// 我们可以把函数的声明和函数的定义放在同一源文件中,我们也可以把函数的声明放到一个头文件中，然后引用过来
// 这里是函数的定义
//int add(int a, int b) {
//	return a + b;
//};

/**
	C++ 中头文件一般是用来进行变量和函数的声明的，#include 是 C++ 的预编译指令，也就是 .h 中的代码在程序编译之前就
	添加到了包含他的源文件中了，而所有的 .cpp 源文件都会被编译器编译为 .obj的文件，最后通过连接器连接成可执行的程序。
	所以，我们在源文件中只需要 include 对应的 .h 文件就可以了，因为在最终执行的可执行文件中已经 link 了对应 .h 文件中
	变量的定义和函数的实现。

	一般情况下，变量和函数的声明需要通过 extern 来标识，但是没有函数体的函数就是函数声明，但是变量声明最好还是使用
	extern

	比如：
	int a;  // 编译器会给 a 分配内存空间
	extern int a;  // 编译器不会给 a 分配内存空间
*/

int main(int argc, char *argv[]) {
	// function 学习
	cout << "5 + 7 = " << add(5, 7) << endl;

	// 如果只是声明了一个函数但是没有定义它，将会发生运行时错误，可以编译通过
	cout << "8 - 4 = " << sub(8, 4) << endl;

	cout << "FUNC_FLAG = " << FUNC_FLAG << endl; // 调用一个没有定义只有声明的变量会产生运行时错误

	changeFlag(FUNC_FLAG);
	cout << "修改后FUNC_FLAG = " << FUNC_FLAG << endl;
	// getchar();

	cout << "从控制台输入的参数为如下：" << endl;

	cout << "总数为：" << argc << endl;

	// main 函数通过 main 的两个形参接收从控制台输入的参数
	// argc 是参数的总数
	// argv 是指向 C 风格的字符的数组
	string ret, ret1;
	while (*argv != 0) {
		cout << "debug:" << *argv << endl;
		char *item = *argv;
		string strItem;
		cout << "debug:item:" << *item << endl;

		// 其实这里可以简化，我们可以直接用 C 风格的字符串给string对象赋值:允许使用一个空字符结尾的 char 数字为 string 赋值或参与 复合运算
		ret1 += *argv;
		ret1 += ",";

		while (*item) {
			strItem += *item;
			item++;
		}
		argv++;
		ret += strItem + ",";
	}

	cout << "拼好的串：" << ret << endl;

	cout << "另一种：" << ret1 << endl;
}