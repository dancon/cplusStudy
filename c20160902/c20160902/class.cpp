#include <iostream>
#include <string>
#include "Screen.h"
using namespace std;

extern int outer; // 在函数外部的变量，没有显示的初始化，编译器会默认初始化
// extern 是一个变量声明，不会进行初始化， 引用了外部的 outer
int main() {
	int i = 0; // 函数内部没有初始化内置类型变量是未定义的
	cout << i << " "<< outer << endl;

	Screen *sc = new Screen();

	sc->self_add();
	cout << "sc.self_cnt = " << sc->get() << endl;

	getchar();
}