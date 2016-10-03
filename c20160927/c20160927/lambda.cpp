#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int main() {
	vector<string> vec;
	size_t sz = 6;
	string strArr[] = {"Hello", "worlds", "I", "Love", "you"};

	// ͨ�� copy ���������� strArr �е�Ԫ�ظ�ֵ�� vec �У� ͨ�� back_inserter ���صĵ�������ֵ��ʱ�򣬻���������� push_back ����
	copy(begin(strArr), end(strArr), back_inserter(vec));

	auto b = vec.begin();

	while (b != vec.end()) {
		cout << *b << " ";
		b++;
	}
	cout << endl;

	// ͨ�� lambda ����ʽ����ǰ������ı��� sz
	auto index = find_if(vec.begin(), vec.end(), [sz](const string &a) {
		return a.size() >= sz;
	});

	cout << *index << endl;
	getchar();
}