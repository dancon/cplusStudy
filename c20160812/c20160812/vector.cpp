#include <iostream>
#include <string>
#include <vector> // ʹ��vector��������vector.h
using namespace std;

int main() {
	// vector��һ����ģ�壬vector���������������ָ�����͵Ķ���

	// vector����Ķ���ͳ�ʼ��
	vector<int> vcint;  // ������һ���������int���͵�vector�ն���

	vector<string> vcstr(3, "a"); // ������һ������Ϊ3��vector���󣬲�vector�����е�ÿ��Ԫ�س�ʼ��Ϊa

	// �б��ʼ��
	vector<string> vcstr1{"a", "b", "c"}; // ���岢��ʼ��vector�����е�ÿ��Ԫ�ص�ֵΪ"a", "b", "c", ����д��Ҳ�ȼ���
	
	vector<string> vcstr2 = { "a", "b", "c" };
}