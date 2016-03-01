/*
* This file is created by @_dgeek (Reuse, but please give credit)
please visit www.9lean.com for more info 
Github link: https://github.com/9lean/Cplusplus_Lambda
[Module - 4] The lambdas capture list
*/
#include <iostream>
using namespace std;

int main4()
{
	int x = 10, y = 20;
	// Passing x & y in lambda by specifying the same in capture list
	auto retVal = [x, y]() -> int { return x + y; }();
	cout << "retVal => " << retVal << "  x => " << x << "   y => " << y << endl;
	
	// Passing x & y in lambda as reference in capture list and modifying the same
	auto retVal1 = [&x, &y]() -> int { x++; y++; return x + y; }();
	cout << "retVal1 => " << retVal1 << "  x => " << x << "   y => " << y << endl;

	int z = 30;

	// passing all locals to lambda by value
	auto retval2 = [=]() -> int { return x + y + z; }();
	cout << "retVal2 =>" << retval2 << endl;

	// passing all locals to lambda by reference
	auto retval3 = [&]() -> int { x++; y++; z++; return x + y + z; }();
	cout << "retVal3 =>" << retval3 <<"  x => "<<x<<"  y =>"<<y<<" z=> "<<z<<endl;

	// passing locals in mix and match way ('x' by value and 'y' by reference)
	auto retval4 = [x, &y]() -> int { y++; return x + y; }();
	cout << "retVal4 =>" << retval4 << "  x => " << x << "  y =>" << y << endl;

	return 0;
}