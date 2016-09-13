#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string filePath = "D:/cplus.txt";

	// ���ǿ���ʹ�ù��캯������һ���ļ�
	ofstream fout(filePath, ofstream::app);

	// ��״̬��ѯ
	// fout.goodbit ��ֻ�Ƕ�Ӧ״̬��״ֵ̬��������ӳ����ǰ��״̬��������Ҫͨ�����ö�Ӧ�ķ������鿴����״̬
	fstream::iostate fstate = fout.goodbit;
	cout << "fout �� good ״̬Ϊ��" << fstate << " good(): " << fout.good() << endl;
	fout.setstate(ofstream::badbit); // ��������״̬Ϊ bad
	cout << "fout �� bad ״̬��" << fout.badbit << " bad(): " << fout.bad() << endl;
	cout << "fout �� fail ״̬��" << fout.failbit << " fail(): " << fout.fail() << endl;
	cout << "fout �� eof ״̬��" << fout.eofbit << " eof(): " << fout.eof() << endl;
	cout << "fout �ĵ�ǰ״̬��" << fout.rdstate() << endl;

	// Ҳ����ͨ�� open ��������һ���ļ�
	ofstream fout1;
	// ʹ��out | trunc ģʽ���ļ���Ҳ���Ƕ�ģʽ������ļ����ݣ�Ҳ��Ĭ�ϵķ�ʽ
	fout1.open("out", ofstream::out | ofstream::trunc); 

	string input, input2;

	if (fout) {
		cout << "�������룺" << fout.good() << endl;
		cin >> input >> input2;
		fout << input << input2 << flush;
		fout1 << input << input2 << endl << "�ļ�����" << endl;
	}

	// һ���ڴ����ļ����߲�������֮�����Ƕ���Ҫȥ�ر����������´ε���openʱ���������޷�������
	fout.close();
	fout1.close();

	// ��C++ �У���һ��������Ϊĳ���������еľֲ���������ô���������������������Ҳ���Զ��ͷ����ݣ�Ҳ����˵���Զ����� close() �ر���
	// �����ļ�����
	/*while (filelist) {
		ofstream input(filelist);
		process_file(&input);

		// ���ﲻ����ʾ���� input.close(), �������������ʱ��input Ҳ�Զ��ͷ���
	}*/
	getchar();
}