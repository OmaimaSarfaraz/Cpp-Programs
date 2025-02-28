#include<iostream>
using namespace std;
void display(int a)
{
    cout<<"Integer: "<<a<<endl;
}
void display(double b)
{ 
    cout<<"Double: "<<b<<endl;
}
void display(string c)
{
    cout<<"String: "<<c<<endl;
}
int main()
{
    display(5);
	display(3.14);
	display("Hello");
	return 0;
}
