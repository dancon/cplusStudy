#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

// build map
map<string, string> buildMap(ifstream &map_file) {
	map<string, string> trans_map;
	string key;
	string value;
	while (map_file >> key && getline(map_file, value)) {
		if (value.size() > 1) {
			trans_map[key] = value.substr(1);
		}
		else {
			throw runtime_error("no rule for " + key);
		}
	}
	return trans_map;
}

// transform input
const string & transform(const string &s, const map<string, string> &m) {
	auto map_it = m.find(s);
	if (map_it != m.end()) {
		return map_it->second;
	}
	else {
		return s;
	}
}

// ����
void word_transform(ifstream &map_file, ifstream &input) {
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text)) {
		istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream >> word) {
			if (firstword) {
				firstword = false;
			}
			else {
				cout << " ";
			}
			cout << transform(word, trans_map);
		}
		cout << endl;
	}
}
int main() {
	// ���������ۺ���ϰ
	ifstream map_file("map_file.txt"), input("input.txt");

	word_transform(map_file, input);

	// �Ա����������� map
	map<string, size_t> words_count;
	unordered_map<string, size_t> unordered_words_count;
	string word;
	while (cin >> word) {
		// Ĭ�ϳ�ʼ��ֵΪ 0
		++words_count[word];
		++unordered_words_count[word];
	}

	cout << "���� map: " << endl;
	for (const auto & w : words_count) {
		cout << w.first << " occurs " << w.second << (w.second > 1 ? " times" : "time") << endl;
	}

	cout << "���� map: " << endl;
	for (const auto &w : unordered_words_count) {
		cout << w.first << " occurs " << w.second << (w.second > 1 ? " times" : "time") << endl;
	}
	getchar();
}