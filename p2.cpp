#include "iostream"

using namespace std;

int main(){
	int a,b,c;
	while(cin >> a >> b){
		c = a + b;
		cout << "The content of a : " << a << endl;
		cout << "The address of a : " << &a << endl;
		cout << "The content of b : " << b << endl;
		cout << "The address of b : " << &b << endl;
		cout << "The content of c : " << c << endl;
		cout << "The address of b : " << &c << endl;
		a = a*b;
		cout << "The content of a : " << a << endl;
		cout << "The address of a : " << &a << endl;
	}
}
