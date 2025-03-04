#include<iostream>
using namespace std;
void greet()
{
    cout<<"Hello, World!\n";
} 
void farewell()
{
    cout<<"Goodbye, World!\n";
} 
int main()
{
    void (*funcPtr)();
	funcPtr=greet;
	funcPtr();
	funcPtr=farewell;
	funcPtr();
	return 0;
}
