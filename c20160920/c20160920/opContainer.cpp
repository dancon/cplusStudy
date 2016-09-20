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

	// 插入元素
	strList.push_back("Hello");
	// strList.push_back(strVec.begin());

	strList.insert(++strList.begin(), strVec.begin(), --strVec.end());

	cout << "strList 的长度：" << strList.size() << endl;
	printCon(strList);

	// 访问元素，返回的都是引用
	strList.front() += " world";
	cout << strList.back() << " " << strList.front() << endl;

	// 删除元素
	strList.pop_back();
	cout << "strList 的长度：" << strList.size() << endl;
	printCon(strList);

	getchar();
}