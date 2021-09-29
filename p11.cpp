#include "iostream"

using namespace std;

int main(){
    int a = 10;
	int arr[10] = {0};
	int *arrp[10];
	for(int i = 0;i < 10 ;++i)
	  arrp[i] = &arr[i];
	int *p1 = new int(10);
	int *p2 = new int[10];
	int **p3 = new int*;
	*p3 = new int (20);
	int **p4 = new int *[10];
	for(int i = 0;i < 10 ;++i)
	  p4[i] = new int(i+2);
	int **p5 = new int *[10];
	for(int i = 0;i < 10 ;++i)
	  p5[i] = new int[i+2];
	cout << "The address of a : " << &a << endl;
	cout << "The address of arr : " << &arr << endl;
	cout << "The address of arrp : " << &arrp << endl;
	cout << "The address of p1 : " << &p1 << endl;
	cout << "The address of p2 : " << &p2 << endl;
	cout << "The address of p3 : " << &p3 << endl;
	cout << "The address of p4 : " << &p4 << endl;
	cout << "The address of p5 : " << &p5 << endl;
	cout << "The content of a : " << &a << endl;
	cout << "The content of arr : " << arr << endl;
	cout << "The content of arrp : " << arrp << endl;
	cout << "The content of p1 : " << p1 << endl;
	cout << "The content of p2 : " << p2 << endl;
	cout << "The content of p3 : " << p3 << endl;
	cout << "The content of p4 : " << p4 << endl;
	cout << "The content of p5 : " << p5 << endl;
}	
