#include<iostream>
using namespace std;
int power(int base,int exp)
{
    return (exp==0)?1:base*power(base,exp-1);
}
int main()
{
    int base,exp;
	cout<<"Enter base and exponent: ";
	cin>>base>>exp;
	cout<<base<<"^"<<exp<<": "<<power(base,exp);
	return 0;
}
