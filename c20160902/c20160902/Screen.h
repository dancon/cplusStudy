#include <iostream>
using namespace std;

class Screen {

public:
	Screen() = default;
	void self_add() const;
	// 在类内定义的函数默认为内联的
	size_t get() const {
		return self_cnt;
	}
private:
	// mutable 类型的变量永远都不会是 const 的
	mutable size_t self_cnt = 0; 
};

void Screen::self_add() const {
	
	// const function 把 this 设置为指向 const 的 Screen 对象，所以这里不能修改 this->self_cnt 的值
	// 我们可以把 self_cnt 声明为 mutable 类型的可变变量，这样，即使是 const function 也可以修改 this -> self_cnt 的值
	++self_cnt;
}