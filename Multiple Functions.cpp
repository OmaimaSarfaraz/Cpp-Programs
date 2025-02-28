#include<iostream>
using namespace std;
void greet()
{
    cout<<"Hello! ";
}
void displayAge(int age)
{ 
    cout<<"You are "<<age<<" years old.";
}
int main()
{
    greet();
	displayAge(25);
	return 0;
}
