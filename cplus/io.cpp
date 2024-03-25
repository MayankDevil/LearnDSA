/*
-	io.cpp
-	programmer : MayankDevil
*/

#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::fstream file;

	std::string file_location = "file";

	std::string data, line;


	// open file in input/output mode with ate flg (sets initial position at the end)

	file.open(file_location, std::ios::out | std::ios::in | std::ios::ate);

	if (file.is_open()) {

		while (std::getline(file, line)) {

			std::cout << line << std::endl;
		}

		/* move file pointer to begin */

		file.seekg(0, std::ios::beg);

		std::cout << "[ write data ]" << std::endl;

		std::cin >> data;

		file << data;

	} else {

		std::cout << "file opne error" << std::endl;
		return 1;
	}

	file.close();

	return 0;
}

// the end
