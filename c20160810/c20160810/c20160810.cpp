#include <iostream>
#include <string>
using namespace std;


int main()
{
	// 获取一行
	/*string line = "";
	while (getline(cin, line)) {
		if (!line.empty()) {
			cout << line << ":" << line.size() << endl;
		}
	}*/

	// range for 范围循环
	string str("some string");
	for (auto c : str) {
		cout << c << endl;
	}

	// 统计字符串中的标点数
	string str1("Hello,world!!!!!!");
	decltype(str1.size()) punctCnt = 0;

	for (auto c: str1) {
		if (ispunct(c)) {
			++punctCnt;
		}
	}
	cout << punctCnt << " punctuation charachters in " << str1 << endl;

	// cin读入数据的时候，以空格为分割
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15"
		<< " separate by space. Hit ENTER when finished: "
		<< endl;
	string::size_type n;
	string result;
	while (cin >> n) {
		if (n < hexdigits.size()) {
			result += hexdigits[n];
		}
		cout << result << endl;
	}
	cout << "Your hex number is: "
		<< result << endl;

    return 0;
}