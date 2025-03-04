#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50},*ptr=arr;
	cout<<"Array using pointer:\n";
	for(int i=0;i<5;i++)
	{
		cout<<*(ptr+i)<<" ";
	}
	return 0;
}
