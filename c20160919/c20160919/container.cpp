#include <array>
#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

void printContainer(vector<string> vec) {
	auto b = vec.begin(), e = vec.end();
	while (b != e) {
		cout << *b << " ";
		b++;
	}
	cout << endl;
}

int main() {
	// �������鲻����������ֵ�򿽱�����׼�� array û�����������ƣ� ���Ǻ����õ�����һ��������ĳ���Ҳ�����͵�һ����

	array<int, 10> arr1;  // �ں����ڲ���arr1 ���ᱻĬ�ϳ�ʼ����ֻ���ں����ⲿ�Ż��ʼ

	// ���ǿ���ͨ��ֵ�б�����ʼ�� array ����
	arr1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	array<int, 10> arr2 = arr1; // �� arr1 ��Ԫ�ؿ�����ֵ�� arr2 �е�ÿ��Ԫ��

	auto b = arr1.begin();
	array<int, 10>::iterator e = arr1.end();

	while (b != e) {
		cout << *b << endl;
		b++;
	}

	cout << "arr2 ��ֵ" << endl;
	auto b1 = arr2.begin(), e1 = arr2.end();
	while (b1 != e1) {
		cout << *b1 << endl;
		b1++;
	};

	// ˳�������� assign ��Ա����
	// ��ֵ�����Ҫ���������ߵı���������һ�£����� assign ������������һ����
	list<string> names;
	vector<const char*> oldStyles = { "a", "an", "this" };
	names.assign(oldStyles.begin(), oldStyles.end());
	cout << "list<string> names �ĳ����ǣ�" << names.size() << endl;
	auto b2 = names.begin(), e2 = names.end();
	while (b2 != e2){
		cout << *b2 << endl;
		b2++;
	}

	// ͨ�� assign �����غ����޸������е�ֵ
	names.assign(10, "hiYa");
	cout << "names �ĳ����ǣ�" << names.size() << " ֵ�ǣ�" << *names.begin() << endl;

	// ˳�������� swap ��Ա����
	// swap ��������������ͬ���͵�����������, �� string �⣬�������������ָ�룬���ã�����������Ч

	vector<string> sec1 = { "I", "am", "a", "boy!" },
		sec2 = {"You", "are", "a", "girl"};

	auto it = sec1.begin() + 1;
	cout << "����ǰ��" << endl;
	cout << "sec1 �����ݣ�" << endl;
	printContainer(sec1);
	cout << "sec2 �����ݣ�" << endl;
	printContainer(sec2);
	cout << "it ��ֵ�� " << *it << endl;

	sec1.swap(sec2);
	cout << "������" << endl;
	cout << "sec1 �����ݣ�" << endl;
	printContainer(sec1);
	cout << "sec2 �����ݣ�" << endl;
	printContainer(sec2);
	cout << "it ��ֵ" << *it << endl;

	string str1 = "aaaa";
	string str2 = "bbbb";
	auto itstr = str1.begin();
	cout << "string ��������" << *itstr << endl;
	
	// swap(str1, str2); // ִ�� swap �� itstr �����������ʱ����
	cout << "string ������" << *itstr << endl;

	// array ������ ������ָ�����ͬһ��Ԫ�أ�ֻ��Ԫ�ص�ֵ���ˣ���Ϊ�� array ִ�� swap ����ʵ�ĸ���Ԫ�ص�ֵ
	array<string, 1> a1 = { "a" };
	array<string, 1> a2 = { "b" };
	auto itarr = a1.begin();
	cout << "itarr��" << *itarr << endl;
	swap(a1, a2);
	cout << "itarr ������" << *itarr << endl;

	getchar();
}