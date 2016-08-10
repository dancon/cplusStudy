#include <iostream>
#include <string>
using namespace std;


int main()
{
	// 获取一行
	string line = "";
	while (getline(cin, line)) {
		if (!line.empty()) {
			cout << line << ":" << line.size() << endl;
		}
	}
    return 0;
}