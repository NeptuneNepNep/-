#include <iostream>
using namespace std;
template<typename T>
//����ģ������ϸ�����ƥ�� ��ͨ���������Զ�ƥ��
//����ģ��Ҳ���Ա���ͨ�������ص�
int Myadd(T a, T c) {
	return a + c;

}
int Myadd(int a, int c) {
	return a + c;

}
int Myadd(int a, char c) {
	return a + c;

}
void test01() {
	int a = 10;
	int b = 20;
	char c1 = 'c';
	char c2 = 'd';
	cout<<Myadd(a, c1)<<endl;
	cout<<Myadd(a, b)<<endl;
	cout << Myadd(c1, c2) << endl;
	
	
}
int main() {
	test01();
	test01();


}