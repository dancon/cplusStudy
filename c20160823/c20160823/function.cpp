#include <iostream>
#include <string>
#include "func.h"
using namespace std;

// ���ǿ��԰Ѻ����������ͺ����Ķ������ͬһԴ�ļ���,����Ҳ���԰Ѻ����������ŵ�һ��ͷ�ļ��У�Ȼ�����ù���
// �����Ǻ����Ķ���
//int add(int a, int b) {
//	return a + b;
//};

/**
	C++ ��ͷ�ļ�һ�����������б����ͺ����������ģ�#include �� C++ ��Ԥ����ָ�Ҳ���� .h �еĴ����ڳ������֮ǰ��
	��ӵ��˰�������Դ�ļ����ˣ������е� .cpp Դ�ļ����ᱻ����������Ϊ .obj���ļ������ͨ�����������ӳɿ�ִ�еĳ���
	���ԣ�������Դ�ļ���ֻ��Ҫ include ��Ӧ�� .h �ļ��Ϳ����ˣ���Ϊ������ִ�еĿ�ִ���ļ����Ѿ� link �˶�Ӧ .h �ļ���
	�����Ķ���ͺ�����ʵ�֡�

	һ������£������ͺ�����������Ҫͨ�� extern ����ʶ������û�к�����ĺ������Ǻ������������Ǳ���������û���ʹ��
	extern

	���磺
	int a;  // ��������� a �����ڴ�ռ�
	extern int a;  // ����������� a �����ڴ�ռ�
*/

int main(int argc, char *argv[]) {
	// function ѧϰ
	cout << "5 + 7 = " << add(5, 7) << endl;

	// ���ֻ��������һ����������û�ж����������ᷢ������ʱ���󣬿��Ա���ͨ��
	cout << "8 - 4 = " << sub(8, 4) << endl;

	cout << "FUNC_FLAG = " << FUNC_FLAG << endl; // ����һ��û�ж���ֻ�������ı������������ʱ����

	changeFlag(FUNC_FLAG);
	cout << "�޸ĺ�FUNC_FLAG = " << FUNC_FLAG << endl;
	// getchar();

	cout << "�ӿ���̨����Ĳ���Ϊ���£�" << endl;

	cout << "����Ϊ��" << argc << endl;

	// main ����ͨ�� main �������βν��մӿ���̨����Ĳ���
	// argc �ǲ���������
	// argv ��ָ�� C �����ַ�������
	string ret, ret1;
	while (*argv != 0) {
		cout << "debug:" << *argv << endl;
		char *item = *argv;
		string strItem;
		cout << "debug:item:" << *item << endl;

		// ��ʵ������Լ򻯣����ǿ���ֱ���� C �����ַ�����string����ֵ:����ʹ��һ�����ַ���β�� char ����Ϊ string ��ֵ����� ��������
		ret1 += *argv;
		ret1 += ",";

		while (*item) {
			strItem += *item;
			item++;
		}
		argv++;
		ret += strItem + ",";
	}

	cout << "ƴ�õĴ���" << ret << endl;

	cout << "��һ�֣�" << ret1 << endl;
}