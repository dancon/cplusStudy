#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string filePath = "D:/cplus.txt";

	// 我们可以使用构造函数来打开一个文件
	ofstream fout(filePath, ofstream::app);

	// 流状态查询
	// fout.goodbit 等只是对应状态的状态值，并不反映流当前的状态，我们需要通过调用对应的方法来查看流的状态
	fstream::iostate fstate = fout.goodbit;
	cout << "fout 的 good 状态为：" << fstate << " good(): " << fout.good() << endl;
	fout.setstate(ofstream::badbit); // 设置流的状态为 bad
	cout << "fout 的 bad 状态：" << fout.badbit << " bad(): " << fout.bad() << endl;
	cout << "fout 的 fail 状态：" << fout.failbit << " fail(): " << fout.fail() << endl;
	cout << "fout 的 eof 状态：" << fout.eofbit << " eof(): " << fout.eof() << endl;
	cout << "fout 的当前状态：" << fout.rdstate() << endl;

	// 也可以通过 open 函数来打开一个文件
	ofstream fout1;
	// 使用out | trunc 模式打开文件，也就是都模式并清空文件内容，也是默认的方式
	fout1.open("out", ofstream::out | ofstream::trunc); 

	string input, input2;

	if (fout) {
		cout << "正在输入：" << fout.good() << endl;
		cin >> input >> input2;
		fout << input << input2 << flush;
		fout1 << input << input2 << endl << "文件结束" << endl;
	}

	// 一般在打开新文件或者操作完流之后，我们都需要去关闭流，避免下次调用open时出错，导致无法操作流
	fout.close();
	fout1.close();

	// 在C++ 中，当一个流对象为某个作用域中的局部变量，那么，当作用域结束后，流对象也会自动释放内容，也就是说会自动调用 close() 关闭流
	// 遍历文件集合
	/*while (filelist) {
		ofstream input(filelist);
		process_file(&input);

		// 这里不用显示调用 input.close(), 当作用域结束的时候，input 也自动释放了
	}*/
	getchar();
}