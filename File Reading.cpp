#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("data.txt");
	if(file.is_open())
	{
	    string line;
		while(getline(file,line))
		cout<<line<<"\n";
		file.close();
		}
	else
	    cout<<"Error opening file!";
		return 0;
}
