#include "iostream"

using namespace std;

class B {
   public:
	   B(){}
   private:
	   int _bd;
};
class A {
   public:
	   A(int ad,B b):_ad(ad),_b(b) {}
   private:
	   int _ad;
	   B _b;
};


int main(){
	B b();
	A a(2,b);
}	
