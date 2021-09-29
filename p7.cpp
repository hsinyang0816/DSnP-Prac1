#include "iostream"

using namespace std;

class C {
   public:
	   void printAddr() const {
	       cout << "The address of a : " << &_a << endl;
	       cout << "The address of b : " << &_b << endl;
	   }
   private:
	   int _a;
	   int _b;
};

int main(){
    C c1;
    cout << "The address of c1 : " << &c1 << endl;
	c1.printAddr();
	C c2;
	cout << "The address of c2 : " << &c2 << endl;
	c2.printAddr();
}	
