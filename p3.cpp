#include "iostream"

using namespace std;

int main(){
   int a;
   int *p;
   cout << "The address of a : " << &a << endl;
   cout << "The address of p : " << &p << endl;
   p = &a;
   cout << "The address of a : " << &a << endl;
   cout << "The address of p : " << &p << endl;
   cout << "The content of a : " << a << endl;
   cout << "The content of p : " << p << endl;
}
