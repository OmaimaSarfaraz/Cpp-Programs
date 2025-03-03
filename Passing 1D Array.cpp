#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
	{
	    cout<<arr[i]<<" ";	
	}
}
int main()
{
    int n;
	cout<<"Enter size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array: ";
	printArray(arr,n);
	return 0;
}
