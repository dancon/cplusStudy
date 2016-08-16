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

	for (int i = 0; i < 100; i ++) {
		vcint.push_back(i);  // ͨ��push_back���Ա������Ϊ��vector���Ԫ��
	}

	vcint[9] = 89; // ����ͨ������������vector�е�Ԫ�أ��������ʷ��ص���Ԫ�ص����ã����Կ������¸�ֵ
	// Note: ������ͨ������Ϊ�յ�vector�������Ԫ��
	cout << "vcint �еĵ�10��Ԫ�ص�ֵΪ��" << vcint[9] << endl;

	// vector ����������
	// ����Ƿ�Ϊ��
	cout << "vcint �Ƿ�Ϊ�գ�" << vcint.empty() << endl;

	// ���vector�Ĵ�С
	cout << "vcint ��Ԫ�ظ�����" << vcint.size() << endl;

	// ����vcint�е�βԪ��
	vcint.pop_back();
	cout << "����һ��Ԫ�غ�vcint�Ĵ�С��" << vcint.size() << "���һ��Ԫ���ǣ�" << *(vcint.end() - 1) << endl;

	getchar();
}