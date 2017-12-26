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
#include <functional>
using namespace std;

int main3()
{
	int retval = []() -> int { return (int)1; }();
	cout << "Return from lambda = "<<retval << endl;
	
	auto lfnParam = [](int val) ->int {
		cout << "lambda takes and interger ->" << val << "<- and returns an Integer"<<endl;
		return val * 100;
	};
	// calling lambda function with parameters
	int retval1 = lfnParam(100);
	cout << "Return from lambda = " << retval1 << endl;

	function<int (int)> lfnfunc = [](int val) {
		cout << "lambda takes and interger ->" << val << "<- and returns an Integer" << endl;
		return val * 200;

	};
	// calling lambda function with explicit std::function handler (replacement of auto)
	int retval2 = lfnfunc(200);
	cout << "Return from lambda std::function<>= " << retval2 << endl;

	// using plain c style function pointers
	int(*cstylefp)(int) = [](int val) {
		cout << "lambda takes and interger ->" << val << "<- and returns an Integer" << endl;
		return val * 300;
	};
	// calling the function pointers
	int retval3 = cstylefp(300);
	cout << "Return from lambda 'C' style function pointers = " << retval3 << endl;

	return 0;
}
