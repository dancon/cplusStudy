#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
	
	// ����һ���� cin �����ĵ�����
	//istream_iterator<int> in(cin), eof;

	//cout << endl << "��Ϊ��" << accumulate(in, eof, 0) << endl;

	// ����һ���� cout �����ĵ�����
	vector<int> vi = { 1, 3, 5, 8, 9, 10 };
	ostream_iterator<int> out(cout, " ");

	// �� ostream_iterator ִ�н����ú͵����͵ݼ����㲢����� cout �����κ����ã����Կ���ֱ�Ӹ���������ֵ��
	for (auto e : vi) {
		out = e;
	}
	cout << endl;

	// ����ͨ�� copy ��������ӡ�����е�����
	cout << "ͨ�� copy �㷨��ӡ��" << endl;
	copy(vi.begin(), vi.end(), out);
	cout << "��ӡ����" << endl;

	getchar();
}