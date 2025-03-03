#include<iostream>
using namespace std;
void printMatrix(int arr[][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {
    	for(int j=0;j<c;j++)
        {
        	cout<<arr[i][j]<<" ";
		}	
		cout<<"\n";
    }   
}
int main()
{
    int r=3,c=3,arr[3][3];
	cout<<"Enter 3x3 matrix elements:\n";
	for(int i=0;i<r;i++)
	{
	    for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}	
	}
	cout<<"Matrix:\n";
	printMatrix(arr,r,c);
	return 0;
}
