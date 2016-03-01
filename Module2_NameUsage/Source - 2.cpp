/*
* This file is created by @_dgeek (Reuse, but please give credit)
please visit www.9lean.com for more into
Github link: https://github.com/9lean/Cplusplus_Lambda
[Module - 2] Usage of lambda with names
*/
#include <iostream>
#include <functional>
using namespace std;
int main2()
{
	auto lfn = []() {
		cout << "This lambda is called using the names" << endl;
	};

	lfn();

	auto lfnParam = [](int val) {
		cout << "The value passed in this function is ->" << val << endl;
	};
	// calling lambda function with parameters
	lfnParam(100);

	function<void (int)> lfnfunc = [](int val) {
		cout << "The value passed in this function is ->" << val << endl;
	};
	// calling lambda function with explicit std::function handler (replacement of auto)
	lfnfunc(200);

	// using plain c style function pointers
	void(*cstylefp)(int) = [](int val) {
		cout << "The value passed in this function is ->" << val << endl;
	};
	// calling the function pointers
	cstylefp(300);
	
	return 0;
}