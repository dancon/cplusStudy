#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> vcint = { 0, 1, 2, 3, 4};
	string str = "Hello, VC++";

	// ͨ������������ʾvcint��ֵ
	// ���ǿ��������������ص���ָ������Ԫ�ص�һ��ָ�룬ʵ�ʵ��������ص���vector::iterator���͵Ķ���
	for (auto it = vcint.begin(); it != vcint.end(); it ++) {
		cout << *it /* ��Ҫ��ָ�������ض�Ӧλ��Ԫ�ص�ֵ */<< " ";
	}
	cout << endl;
	char c = 'A';
	cout << c << endl;
	for (string::iterator it = str.begin(); it != str.end(); it ++) {
		if (isalpha(*it)) {
			*it = toupper(*it);
			cout << *it;
			// ֱ�����toupper(*it) ��ӡ����ASCII��
		}
	}
	cout << endl;

	// ����������
	cout << vcint.begin() - vcint.end() << endl;

	// �����4��Ԫ�ص�ֵ
	cout << *(vcint.begin() + 3) << endl;

	vector<int>::iterator it = vcint.begin() + 4;

	cout << vcint.end() - it << endl;

	cout << (it < vcint.end()) << endl;

	getchar();
}