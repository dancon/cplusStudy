#include <iostream>
#include <string>

using namespace std;

int main() {
	
	// ֱ�Ӹ�ֵ�Ϳ�������
	string s1; // ������һ���մ�
	cout << s1.empty() << endl;
	string s2 = "hello"; // ����������ֵ��s2
	string s3("world"); // ֱ�Ӹ�ֵ
	string s4(5, 'c'); // �ڶ�������ֻ�����ַ�����

	//cin >> s1;
	//cout << s1 << endl;

	cin >> s1 >> s2;
	cout << s1 << " " << s2 << endl;  // cin�Կո�Ϊ����

	/*string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;*/

	string word;
	while (cin >> word)
		cout << word << endl;
	
	return 0;
}