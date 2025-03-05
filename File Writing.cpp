#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("data.txt");
	if(file.is_open())
	{
	    file<<"Hello, this is a test file!\n";
		file<<"C++ File Handling Example.\n";
		file.close();
		cout<<"Data written successfully!\n";
	}
	else 
	{
		cout<<"Error opening file!";
	}
	return 0;
}
