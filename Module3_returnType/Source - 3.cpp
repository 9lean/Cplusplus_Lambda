/*
* This file is created by @_dgeek (Reuse, but please give credit)
please visit www.9lean.com for more into
Github link: https://github.com/9lean/Cplusplus_Lambda
[Module - 3] lambda with return types
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