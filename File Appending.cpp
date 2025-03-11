#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("data.txt",ios::app);
	if(file.is_open())
	{
	    file<<"Appending new line!\n";
		file.close();
		cout<<"Data appended successfully!\n";
		}
	else 
	cout<<"Error opening file!";
	return 0;
}
