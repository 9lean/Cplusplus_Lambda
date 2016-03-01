# Module - 3 : Specifying return type with lambdas

*Just like normal functions, lambdas can also return values. The return value is provided after round brackets and before curly brackets.*

***The return values are specified with Arrow (->) sign***
```
[]() -> int { return (int)1; }();

```
***The return values can be assigned into a variable of the type or by using auto keyword***
```
int retval = []() -> int { return (int)1; }();
// OR
auto retval = []() -> int { return (int)1; }();

// another example
auto lfnParam = [](int val) ->int {
		cout << "lambda takes and interger ->" << val << "<- and returns an Integer"<<endl;
		return val * 100;
};

// calling lambda function with parameters
int retval1 = lfnParam(100);

```
***we can also use std::function and 'C' style function pointers for the appropriate return types***
```
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

```
