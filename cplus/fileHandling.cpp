/*
-   fileHandling.cpp
-   programmer : MayankDevil
*/

#include <iostream>
#include <fstream>
#include <string>

/*

ios::in

    - open file for read data.

ios::out

    - open file for write data, if file alredy exist turcate to overwrite data.

ios::app

    - open file for append data, if file not exist create new file.

ios::ate

    - open file for read AND write data, if file exist so append data.

ios::trunc

    - open file data trucate that use with out mode

ios::binary

    - open file in binary mode input OR output. 

*/

int main() {
	
	std::fstream file;
	
	const std::string file_location = "./file.txt";
	
	// write mode -----
	
	file.open(file_location, std::ios::out); 
	
	if (file.is_open()) {
	
	    file << "write data in file";
	}
	
	file.close();
	
	// trunc & write mode -----
	
	file.open(file_location, std::ios::trunc | std::ios::out);
	
	if (file.is_open()) {
	
	    file << "truncate and write data in file";
	}
	
	file.close();
	
	// append mode -----
	
	file.open(file_location, std::ios::app);
	
	if (file.is_open()) {
	
	    file << " append data in file";
	}
	
	file.close();
	
	// read mode -----
	
	file.open(file_location, std::ios::in);
	
	if (file.is_open()) {
	
	    std::string line;
	
	    while (getline(file, line)) {
	        
	        std::cout << line << std::endl;
	    }
	}
	
	file.close();
	
	return 0;
}
