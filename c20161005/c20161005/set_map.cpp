#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main() {
	/*map<string, size_t> words_count;
	set<string> exclude = {"an", "the", "and"};
	string word;

	while (cin >> word) {
		if (exclude.find(word) == exclude.end()) {
			++words_count[word];
		}
	}


	for (const auto &w : words_count) {
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
	}*/

	// �����������
	// ֮�б��ʼ�� map
	map<string, string> authors = {
		{"Joyce", "James"},
		{"Austen", "Jane"},
		{"Dickens", "Charies"}
	};

	// ��ӡ authors
	for (auto &w : authors) {
		cout << w.first << "��" << w.second << endl;
	}

	getchar();
}