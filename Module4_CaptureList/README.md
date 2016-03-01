# Module - 4 : The lambda capture list

*The capture list is mainly used to pass local variables to the lambda functions without explicitly using them as part of parameters list i.e inside round brackets*

### 4.1 Passing the locals by value

*Local variables can be passed into lambda function by Specifying the same in the capture list. We can then access the variables inside the lambda function*

*In the code below, we are accessing the local variables 'x' & 'y' inside the lambda function*

```
{
  int x = 10, y = 20;
  // Passing x & y in lambda by specifying the same in capture list
  auto retVal = [x, y]() -> int { return x + y; }();
  cout << "retVal => " << retVal << "  x => " << x << "   y => " << y << endl;
}
```

### 4.2 Passing the locals by reference
*Local variables can also be passed by reference in the capture list. if passed by reference, the update to local variables will be reflected outside lambdas*

*In the code below, we are accessing local variable passed by reference and modifying the same*

```
{
  int x = 10, y = 20;
  // Passing x & y in lambda as reference in capture list and modifying the same
	auto retVal1 = [&x, &y]() -> int { x++; y++; return x + y; }();
	cout << "retVal1 => " << retVal1 << "  x => " << x << "   y => " << y << endl;
}

```

### 4.3 Passing all local variables at once (By Value)

*In situations where all local variables needs to be passed by value, we can do it via using '=' sign in capture list as shown in sample code below*

```
{
  int x = 10, y = 20, z = 30;
  // passing all locals to lambda by value
	auto retval2 = [=]() -> int { return x + y + z; }();
	cout << "retVal2 =>" << retval2 << endl;
}

```
### 4.4 Passing all local variables at once (By reference)
*In situations where all local variables needs to be passed by value, we can do it via using '&' sign in capture list as shown in sample code below*

```
{
  int x = 10, y = 20, z = 30;
  // passing all locals to lambda by reference
	auto retval3 = [&]() -> int { x++; y++; z++; return x + y + z; }();
	cout << "retVal3 =>" << retval3 <<"  x => "<<x<<"  y =>"<<y<<" z=> "<<z<<endl;
}

```
### 4.5 Passing local variables in mix and match way (Some by Value and Some by Reference)
*The variables can be passed in capture list in mixed and match way, where some variables can be passed by value and some by Reference as depicted in code below*

```
{
  int x = 10, y = 20;
  // passing locals in mix and match way ('x' by value and 'y' by reference)
	auto retval4 = [x, &y]() -> int { y++; return x + y; }();
	cout << "retVal4 =>" << retval4 << "  x => " << x << "  y =>" << y << endl;
}

```
***Note - 1 :*** *We cannot modify pass by value variables i.e we can't do x++; in above example*

***Note - 2 :*** *lambda capture works only for local scope and cannot be used for global variables*
