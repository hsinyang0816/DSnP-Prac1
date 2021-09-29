#include "iostream"

using namespace std;

int main(){
    int a = 10;
	int &r = a;
	cout << "The address of r : " << &r <<endl;
	cout << "The address of a : " << &a <<endl;
	int b = 20;
	r = b;
	cout << "The address of a : " << &a <<endl;
	cout << "The address of b : " << &b <<endl;
	cout << "The address of r : " << &r <<endl;
	cout << "The content of a : " << a <<endl;
	cout << "The content of b : " << b <<endl;
	cout << "The content of r : " << r <<endl;

}
