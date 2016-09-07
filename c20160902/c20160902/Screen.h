#include <iostream>
using namespace std;

class Screen {

public:
	Screen() = default;
	void self_add() const;
	// �����ڶ���ĺ���Ĭ��Ϊ������
	size_t get() const {
		return self_cnt;
	}
private:
	// mutable ���͵ı�����Զ�������� const ��
	mutable size_t self_cnt = 0; 
};

void Screen::self_add() const {
	
	// const function �� this ����Ϊָ�� const �� Screen �����������ﲻ���޸� this->self_cnt ��ֵ
	// ���ǿ��԰� self_cnt ����Ϊ mutable ���͵Ŀɱ��������������ʹ�� const function Ҳ�����޸� this -> self_cnt ��ֵ
	++self_cnt;
}