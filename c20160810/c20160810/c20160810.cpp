#include <iostream>
#include <string>
using namespace std;


int main()
{
	// ��ȡһ��
	/*string line = "";
	while (getline(cin, line)) {
		if (!line.empty()) {
			cout << line << ":" << line.size() << endl;
		}
	}*/

	// range for ��Χѭ��
	string str("some string");
	for (auto c : str) {
		cout << c << endl;
	}

	// ͳ���ַ����еı����
	string str1("Hello,world!!!!!!");
	decltype(str1.size()) punctCnt = 0;

	for (auto c: str1) {
		if (ispunct(c)) {
			++punctCnt;
		}
	}
	cout << punctCnt << " punctuation charachters in " << str1 << endl;

	// cin�������ݵ�ʱ���Կո�Ϊ�ָ�
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