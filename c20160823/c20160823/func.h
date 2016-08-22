#pragma once
#ifndef FUNC_H
#define FUNC_H

// 变量声明
extern int FUNC_FLAG;

// 加法
int add(int, int);

// 减法
int sub(int, int);

// 通过引用传值来修改 FUNC_FLAG 的值
void changeFlag(int &);
#endif // FUNC_H

