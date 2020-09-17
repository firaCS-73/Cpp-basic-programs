#include<iostream>
using namespace std;
int main()
{
	int a=5,b=10;
	cout<<"\n Before swap a = "<<a<<"\tb = "<<b<<endl<<endl;
	a=a+b;//a=15(5+10)
	b=a-b;//b=(15-10)
	a=a-b;//a=10(15-5)
	cout<<" After swap a = "<<a<<"\tb = "<<b<<endl;
	return 0;
}
