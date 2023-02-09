// PassByValues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates call by value, call by reference and call by address

#include <iostream>
using namespace std;
/*
-The call/pass by value method of passing arguments to a function copies the actual value of an argument
into the formal parameter of the function.
-In this case, changes made to the parameter inside the function have no effect on the argument.
-By default, C++ uses call by value to pass arguments. In general, this meand that code within a function cannot
alter the arguments used to call the function.
*/

/*
-The call/pass by reference method of passing arguments to a function copies the reference of an argument
into the formal parameter
-Inside the function, the reference is used to access the actual argument used in the call. This meand that
changes made to the parameter affect the passed argumenr.
_To pass the value by reference, argument reference is passed to the functions just like any other value
*/

/*
-The call by pointer method of passing arguments to a function copies the address of an argument into the formal
parameter.
-Inside the function, the address is used to access the actual argument used in the call. This means that changes made
to the parameter affect the passed argument.
-To pass the value by pointer, argument pointers are passed to the functions just like any other value.
*/

//call by value or pass by value
void passByValue(int x, int y)
{
	int z = x;
	x = y;
	y = z;
}
// call by reference or pass by reference
void passByReference(int& x, int& y)
{
	int z = x;
	x = y;
	y = z;
}
void passByAddress(int* x, int* y)
{
	int z = *x;
	*x = *y;
	*y = z;
}
int main()
{
	int a = 5, b = 6;
	cout << "Before swapping" << endl << "a:" << a << endl << "b:" << b << endl << endl;
	//call function
	passByAddress(&a, &b);//The function call here can be interchanged for Value or Reference or Address

	cout << "After swapping" << endl << "a:" << a << endl << "b:" << b << endl << endl;
	return 0;

}

