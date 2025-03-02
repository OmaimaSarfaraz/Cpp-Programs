#include<iostream>
using namespace std;
int main()
{
    int r,c;
	cout<<"Enter rows and cols: ";
	cin>>r>>c;
	int arr[r][c];
	cout<<"Enter "<<r*c<<" elements:\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix:\n";
	for(int i=0;i<r;i++)
	{
	    for(int j=0;j<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}	
		cout<<"\n";
	}
	return 0;
}
