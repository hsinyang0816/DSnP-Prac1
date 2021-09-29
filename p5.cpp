#include "iostream"

using namespace std;

class C {
	public:
		//		void print ();
		class C (){

			cout << "The address of x : " << &this->x <<endl; 
			cout << "The address of y : " << &this->y <<endl; 
			cout << "The address of z : " << &this->z <<endl; 
		};
	private:
		char x;
		char y;
		char z;
};

/*void C::print(){
  cout << "The address of x : " << &this->x <<endl; 
  cout << "The address of y : " << &this->y <<endl; 
  cout << "The address of z : " << &this->z <<endl; 
  }*/

int main(){
	char *a = new char;
	int *a1 = new int;
	int *a2 = new int;
	C *c1 = new C;
	C *c2 = new C;
	C *c3 = new C;
	//c1.print();
	//c2.print();
	//c3.print();
	cout << "The size of C : " << sizeof(C) <<endl;
	cout << "The address of a1 : " << &a1 <<endl; 
	cout << "The address of a2 : " << &a2 <<endl; 
	cout << "The address of c1 : " << &c1 <<endl; 
	cout << "The address of c2 : " << &c2 <<endl; 
	cout << "The address of c3 : " << &c3 <<endl; 
	cout << "The content of a1 : " << a1 <<endl; 
	cout << "The content of a2 : " << a2 <<endl; 
	cout << "The content of c1 : " << c1 <<endl; 
	cout << "The content of c2 : " << c2 <<endl; 
	cout << "The content of c3 : " << c3 <<endl; 
}
