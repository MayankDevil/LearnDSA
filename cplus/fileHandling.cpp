/*
 * fileHandling.cpp
 * */

#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ios;

using std::fstream;

int main()
{
	fstream myFile;
	
	myFile.open("file.txt",ios::out);
	
	if (myFile.is_open())
	{
		myFile << " hello \n how are you?" << endl;
	}
	else
	{
		cout << " ERR_File_Not_Open " << endl;
	}
	
	return 0;
}
