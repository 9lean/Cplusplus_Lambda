# Module - 2 : Usage of lambda with names

*The lambdas can be given a name so that they can be used at any later point of time. For anonymous lambdas, usage has to be done in-place as described in Module - 1*

### 2.1 Using C++ auto Keyword

*The lambda can be simply assigned a name by using C++ auto keyword. By far this is the simplest way of assigning a name to a lambda*
```
auto lfn = []() {
		cout << "This lambda is called using the names" << endl;
	};
	// call the lambda function
	lfn();
```
### 2.2 Using auto for lambda with parameters

*'auto' keyword can also be used with ease when lambdas have parameters, the only constraint here is that you need to know the parameter lists before calling the function using the name*

```
auto lfnParam = [](int val) {
		cout << "The value passed in this function is ->" << val << endl;
	};
	// calling lambda function with parameters
	lfnParam(100);

```
### 2.3 using std::function<> for lambda
*The "auto" keyword automatically generates the function pointers. however, we can explicitly use std::function<> to hold that function pointer. The code snippet below shows usage of std::function<>*

```
function<void (int)> lfnfunc = [](int val) {
		cout << "The value passed in this function is ->" << val << endl;
	};
	// calling lambda function with explicit std::function handler (replacement of auto)
	lfnfunc(200);

```
***Note:*** *we need to put return type (void) in std::function, even though its not explicitly specified while  creating lambdas*

### 2.4 Using plain old 'C' style function pointers

*Lambdas are just functions and can be assigned to a 'C' style function pointers. Though I'll seriously discourage you to use this*

```
// using plain c style function pointers
	void(*cstylefp)(int) = [](int val) {
		cout << "The value passed in this function is ->" << val << endl;
	};
	// calling the function pointers
	cstylefp(300);

```
