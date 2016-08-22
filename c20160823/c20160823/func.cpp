#include "func.h"

int FUNC_FLAG = 10;

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

void changeFlag(int &flag) {
	flag = 100;
}