#include <iostream>
using namespace std;
template<typename T>
//函数模板必须严格类型匹配 普通函数可以自动匹配
//函数模板也可以被普通函数重载的
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


}