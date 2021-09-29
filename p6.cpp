#include "iostream"

using namespace std;

void f(){
   int a,b,c;
   cout << "The address of a : " << &a <<endl;
   cout << "The address of b : " << &b << endl;
   cout << "The address of c : " << &c << endl;
   int* p = new int;
   int* q = new int;
}

int main(){
    cout << "the first time : " << endl; 
    f();
    cout << "the second time : " << endl; 
    f();
    cout << "the thrid time : " << endl; 
    f();

}	
