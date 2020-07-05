//C++ FUNCTIONS

#include <iostream>
using namespace std;

/*A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.*/

//create a function
/*C++ provides some pre-defined functions, such as main(), which is used to execute code.
to create your own (often referred to as declare), specify the name of the function, followed by parentheses()*/

void my1stFunction(){ // function declaration (function needs to be declared at the top (before main())
	// function definition
	//'void' specify that the function does not have a return value
	//code to be executed when function is called
	cout << "I just got executed\n";
}

void my2ndFunction();
void my3rdFunction(string fname);


//it is possible to separate function declaration and definition
//such that functions will still need to be declared before main
//but can be defined after main for example for code optimisation 
//and readability.

void my2ndFunction(){
	cout << "Hello\n";
}

//C++ PARAMETERS
/*
Information can be passed to functions as a parameter. Parameters act as variables inside the function.
Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:
*/

//Syntax
/*void functionName(parameter1, parameter2, parameter3){
	//code to be executedss
}*/
//example
void my3rdFunction(string fname){
	cout << "Hello " << fname << "\n";
}

//C++ default parameters
/*a default parameter can be used with equal sign
if the function is used without argument the default will be used.
void myFunction(string country = "UK") {
  cout << country << "\n";
}
A parameter with a default value, is often known as an "optional parameter".
*/
void my4thFunction(string country="UK"){
	cout << country << "\n";
}

//C++ MULTIPLE PARAMETERS
/*
Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.
*/
void my5thFunction(int age, string name){
	cout << name << " is " << age << " years old.\n";
}

//C++ THE RETURN KEYWORD
int my6thFunction(int x){
	return x+10;
}

int my7thFunction(int x, int y){
	return x + y;
}

//C++ FUNCTION - PASS BY REFERENCE
//arguments of a function can be passed by reference if there is a need to modify them.
void swapNums(int &x, int&y){
	int z= x;
	x=y;
	y=z;
}

//C++ FUNCTION OVERLOADING
//With function overloading, multiple functions can have the same name with different parameters
//Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.

int plusFunc(int x, int y){
	return x+y;
}

double plusFunc(double x, double y){
	return x + y;
}


int main(){
	my1stFunction();
	my2ndFunction();
	my3rdFunction("World");
	my3rdFunction("Everyone");
	my3rdFunction("You");
	my4thFunction();
	my5thFunction(25, "Joe");
	cout << my6thFunction(5) << "\n";
	cout << my7thFunction(1,2) << "\n";
	int z = my7thFunction(2,3);
	cout << z << "\n";
	
	int firstNum = 10;
	int secondNum = 20;
	
	cout << "1st Num: " << firstNum << "\n";
	cout << "2nd Num: " << secondNum << "\n";
	
	swapNums(firstNum, secondNum);
	
	cout << "1st Num: " << firstNum << "\n";
	cout << "2nd Num: " << secondNum << "\n";
	
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2 << "\n";
	
	return 0;
}


