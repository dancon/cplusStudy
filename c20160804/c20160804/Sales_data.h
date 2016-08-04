#ifndef SALES_DATA_H  // 预处理保护符，用来避免重复引用头文件而导致程序不正常工作， SALES_DATA_H是一个预处理变量，其实没有什么实际意义，就是一个用做引用过头文件的标识
#define SALES_DATA_H  // 定义预处理变量
#include <string>
struct Sales_data  // 定义结构体
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif // !1
