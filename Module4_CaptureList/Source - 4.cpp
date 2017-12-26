/*
* MIT Licence
* Copyright 2017 @9lean
*
* Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files(the "Software"), to deal in the 
* Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and / or sell copies of the Software, 
* and to permit persons to whom the Software is furnished to do so, subject to the following conditions :
* The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR 
* ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH 
* THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/* 
* visit https://github.com/9lean/Cplusplus_Lambda for description of the code
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
