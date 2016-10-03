#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

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
	getchar();
}