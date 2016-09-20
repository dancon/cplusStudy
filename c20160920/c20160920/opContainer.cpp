#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

void printCon(list<string> list) {
	auto b = list.begin(), e = list.end();
	while (b != e) {
		cout << *b << " ";
		b++;
	}
	cout << endl;
}

int main() {
	vector<string> strVec = {"This", "is", "cplus", "study"};

	list<string> strList;

	// ����Ԫ��
	strList.push_back("Hello");
	// strList.push_back(strVec.begin());

	strList.insert(++strList.begin(), strVec.begin(), --strVec.end());

	cout << "strList �ĳ��ȣ�" << strList.size() << endl;
	printCon(strList);

	// ����Ԫ�أ����صĶ�������
	strList.front() += " world";
	cout << strList.back() << " " << strList.front() << endl;

	// ɾ��Ԫ��
	strList.pop_back();
	cout << "strList �ĳ��ȣ�" << strList.size() << endl;
	printCon(strList);

	getchar();
}