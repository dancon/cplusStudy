#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;
using namespace std::placeholders;

// bind ����
bool check_size(const string &s, string::size_type sz) {
	return s.size() >= sz;
}

// �� ��������
ostream &print(ostream &os, const string &s, char c) {
	return os << s << c;
}
int main() {

	size_t v1 = 42;
	// ���Ҫ�޸�һ��ֵ����ı�����ֵ����Ҫ�ڲ����б�ǰ�� mutable �ؼ���
	// ������ӱ���ʱ����
	auto fn = [v1]()mutable {
		return ++v1;
	};

	auto rtn = fn();

	cout << "ִ�еĽ���ǣ�" << rtn << " v1 = " << v1 << endl;

	auto fn2 = [&v1] {
		v1++;
	};

	fn2();
	cout << "v1 = " << v1 << endl;

	vector<int> vi = { 2, -3, 4, 8, -23 };

	// lambda �Ĳ����б�ֻ�������������ں����ľֲ�������lambda �ĺ�������Է��ʵ����ں�������������ߵı����;�̬�ֲ�������
	auto fn3 = [](const int &s) {
		cout << s << " ";
	};

	cout << "�޸�ǰ��" << endl;

	for_each(vi.begin(), vi.end(), fn3);
	cout << endl;

	// ���lambda �������а����� return ֮���������䣬��Ĭ�Ϸ��� void , ����ͨ��λ�÷�����ָ���������͡�
	transform(vi.begin(), vi.end(), vi.begin(), [](int i) -> int {
		if (i < 0) {
			return -i;
		}
		else {
			return i;
		}
	});

	cout << "�޸ĺ�" << endl;
	for_each(vi.begin(), vi.end(), fn3);
	cout << endl;

	// bind
	size_t sz1 = 6;

	// �󶨺���������ռλ�� _1 ���Ƕ����� std �����ռ�� placeholders ��
	auto check = bind(check_size, _1, sz1);
	vector<string> vs = { "hello", "this", "is", "a", "beautiful", "world" };
	auto index = find_if(vs.begin(), vs.end(), check);

	cout << "���ȴ���" << sz1 << "���ַ��ǣ�" << *index << endl;

	// ������
	// ��ʹ�� bind ������һ�����������õ�ʱ�򣬱���ʹ�� ref ������ת��
	for_each(vs.begin(), vs.end(), bind(print, ref(cout), _1, ' '));
	getchar();
}