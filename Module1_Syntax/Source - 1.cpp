/*
* This file is created by @_dgeek (Reuse, but please give credit)
please visit www.9lean.com for more into
Github link: https://github.com/9lean/Cplusplus_Lambda 
[Module - 1] Lambda Syntax
*/
#include <iostream>
using namespace std;

int main1()
{
	[]() {};

	[]() {
		cout << "Lambda calling this cout" << endl; 
	}();

	[](int val) {
		cout << "The value passed in this function is ->" << val<< endl; 
	}(100);

	return 0;
}