#include <iostream>
#include <string>
#include "Screen.h"
using namespace std;

extern int outer; // �ں����ⲿ�ı�����û����ʾ�ĳ�ʼ������������Ĭ�ϳ�ʼ��
// extern ��һ������������������г�ʼ���� �������ⲿ�� outer
int main() {
	int i = 0; // �����ڲ�û�г�ʼ���������ͱ�����δ�����
	cout << i << " "<< outer << endl;

	Screen *sc = new Screen();

	sc->self_add();
	cout << "sc.self_cnt = " << sc->get() << endl;

	getchar();
}