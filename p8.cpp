#include "iostream"

using namespace std;

class C {
   public:
	   C(int a,int b):_a(a),_b(b) {}
	   void printAddr() const {
	       cout << "The address of a : " << &_a << endl;
	       cout << "The address of b : " << &_b << endl;
	   }
	   void printdata() const {
	       cout << "The content of a : " << _a << endl;
	       cout << "The content of b : " << _b << endl;
	   }
   private:
	   int _a;
	   int _b;
};

int main(){
    C c1(1,2);
    cout << "The address of c1 : " << &c1 << endl;
	c1.printAddr();
	c1.printdata();
	C c2(2,3);
	cout << "The address of c2 : " << &c2 << endl;
	c2.printAddr();
	c2.printdata();
}	
