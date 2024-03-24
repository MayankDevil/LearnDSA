/*
 * opp.cpp
 * c++ is not pure oop language
 */

#include <iostream>

using std::cout;
using std::endl;

class Example
{	
	private:
	
		int num; // private member scope inside that class
	
	public:
	
	Example()
	{
		cout << " special function without return type as classname that call by create object " << endl;
	}
	
	void setNumber(int num)
	{
		this->num = num;
	}
	
	int getNumber()
	{
		return num;
	}
};

/* class is collection functions and variable
 * class is abstract datatype that present "property and functionality" of class object
 * */

int main()
{
	Example object_one;
	
	object_one.setNumber(12);
	
	cout << object_one.getNumber();
	
	return 0;
}

