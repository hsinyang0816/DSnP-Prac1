#include "iostream"

using namespace std;
class C;
class B {
	public:
	int _bd;
};
class A {
	public:
	C *_c;
	B _b;
};


int main(){
	A a;
	cout <<"The address of a : " << &a <<endl;
	cout <<"The address of a._c : " << &a._c <<endl;
	cout <<"The content of a._c : " << a._c <<endl;
	cout <<"The address of a._b : " << &a._b <<endl;
}	
