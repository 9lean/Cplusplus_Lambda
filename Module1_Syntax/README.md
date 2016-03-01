# Module - 1 : Lambdas Syntax introduction

### 1.1 lambdas : *Basic Syntax*

*The syntax of lambda consists of 3 items*

1. [] *Open Close square brackets*
2. () *Open Close round brackets*
3. {} *Open Close curly brackets*

*This statement is syntactically valid C++ lambda and will compile successfully*

```
[](){};

```
### 1.2 lambdas : *Defining functionality*

*The functionality can be added by writing code in between open and close curly brackets*
```
[]() {
  cout<<"Lambda calling this cout"<<endl;
};

```
### 1.3 lambdas : *Calling Lambda*

*The lambdas can also be called in-place (where its defined) by using open close round brackets after it (just like calling any other functions). The example below will execute the lambdas*

```
[]() {
	cout << "Lambda calling this cout" << endl;
}();

```
### 1.4 lambdas : *Function parameters*

*The round brackets are used to pass the Parameters (just like any other function). The example below calls the function in place by passing a integer parameter*

```
[](int val) {
		cout << "The value passed in this function is ->" << val<< endl;
	}(100);
```
