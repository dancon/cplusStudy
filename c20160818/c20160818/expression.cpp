#include <iostream>
#include <string>
using namespace std;

// ���ʽѧϰ
int main() {
	// ����������û����ֵ˳��һ������²�����ʲô���⣬���ǵ���һ�����ϱ��ʽ�У����е�һ���ӱ��ʽ�޸���ĳ����������ֵ��������һ���ӱ��ʽ�ֻ�ʹ��������������ʱ����ֵ˳��ͱȽ���Ҫ��
	
	string s = "Hello, something!";
	
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
		*it = toupper(*it);
	}
	cout << s << endl;

	// ������һ��д��
	auto beg = s.begin();
	//while (beg != s.end() && !isspace(*beg)) {
	//	// *beg = toupper(*beg++); // ��������ֵ���ʽ���Ҳ�����ʹ��++�޸���begָ��λ�ã����¸�ֵ�������ֵ��Ԥ�ڲ�ͬ�����յ��´���
	//}
	cout << "while: " << s << endl;

	// ��������ͼ�ͷ�����
	// ��������������������������������Ա����ͷ�����������ָ�����ͣ������ú���ʶ����Ա

	string str = "this is a test string", *p = &str;
	auto size = str.size();
	size = (*p).size();
	size = p->size();

	// ��������?:�����ȼ��ر�ͣ������ڸ��ϱ��ʽ��һ��Ҫ������
	int grade = 90;
	cout << ((grade < 60) ? "fail" : "pass") << endl;  // ���pass
	cout << (grade < 60) ? "fail" : "pass"; // ���0
	// cout << grade < 60 ? "fail" : "pass";  // ���뱨��

	// sizeof �������һ��������ֵʱ��Ӧ�ý�Ϊ���ͼӸ����ţ����ʽ����sizeof�����ֽ���
	auto intSize = sizeof (int);
	cout << "int ���͵Ĵ�С��" << intSize << endl;

	cout << "str�Ĵ�С�ǣ�" << sizeof str << endl;

	getchar();
}