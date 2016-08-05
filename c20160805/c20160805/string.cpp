#include <iostream>
#include <string>

using namespace std;

int main() {
	
	// 直接赋值和拷贝复制
	string s1; // 定义了一个空串
	cout << s1.empty() << endl;
	string s2 = "hello"; // 把字面量赋值给s2
	string s3("world"); // 直接赋值
	string s4(5, 'c'); // 第二个参数只能是字符类型

	//cin >> s1;
	//cout << s1 << endl;

	cin >> s1 >> s2;
	cout << s1 << " " << s2 << endl;  // cin以空格为结束

	/*string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;*/

	string word;
	while (cin >> word)
		cout << word << endl;
	
	return 0;
}