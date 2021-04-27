#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
	int a = 10;// a변수 선언
	int* ptr; //포인터 선언
	ptr = &a; //포인터 초기화 

	cout << "변수 a의 주소는 :" << ptr << endl;
	cout << "a의 값은: " << a << endl;
	return 0;
}