/*
 * namespace.cpp
 */
 
#include <iostream>

namespace name1 {
	
	int age;
}

namespace name2 {

	int age;
	
	int setAge()
	{
		return 12;
	}
}

// namespace is a collection of (class, function, variable) entities.
// whose names are prefixed by name of namespace that called "full qualified name"

int main()
{
	std::cout << " cout, endl, cin etc object in [std] namespace " << std::endl;
	
	
	name1::age = name2::setAge(); // full qualifed name
	
	name2::age = 15;
	
	std::cout << name1::age << "\t" << name2::age << std::endl; 

	return 0;
}
