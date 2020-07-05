#include <iostream>
#include <string>
using namespace std;

int main(){
	//C++ COMMENTS
	/*this is a multiline comment*/
	//this is a comment
	cout << "Hello World!\n" << endl; //this is another comment
	
	//C++ NEW LINES \n or endl
	cout << "Hello again!\n" <<endl;
	//C++ OUTPUT (PRINT TEXT)
	cout << "I am learning C++\n";
	
	//C++ VARIABLES
	//declaring a variable of type int with initialisation.
	int myNum=15;
	cout << myNum << "\n";
	
	//declaring a variable first, initialisting later
	int yourNum;
	yourNum=20;
	cout <<yourNum << "\n";
	
	//other data types
	int thisNum=5; //Integer (whole number without decimals)
	double myFloatNum = 5.99; //Floating point number (with decimals)
	char myLetter = 'D'; //Character
	string myText = "Hello"; //String (text)
	bool myBoolean=true;  //Boolean (true or false)
	
	//Display Variables
	int myAge=35;
	cout << "I am " << myAge << " years old.\n";
	
	//add variables
	int x= 5;
	int y=6;
	int sum = x+y;
	cout << sum <<endl;
	
	//C++ DECLARE MULTIPLE VARIABLES
	//declare many variables of the same type
	int xx=5, yy=6, zz=50;
	cout << xx + yy + zz << endl;
	
	//C++ IDENTIFIERS
	//variables must be identified with unique names
	//Names can contain letters, digits and undercores
	//Names must begine with a letter or an underscore (_)
	//Names are case sensitive (myVar and myvar are different variables)
	//Names cannot contain whitespaces or special characteres like !, #, %, etc.
	//Reserved words (like C++ keywords, such as int) cannot be used as names.
	int minutesPerHour = 60; //good descriptive name
	int m = 60; //OK, but not so easy to understand what m is
	
	//C++ CONSTANTS
	const int myConst = 15; //myConst will always be 15
	// myConst = 10; wil cause an error.
	
	//examples
	const float PI = 3.1415926535;
	
	
	//C++ USER INPUT
	int myInput;
	cout << "type a number: "; //type the number and press enter
	//cin >> myInput; //Get user input from the keyboard
	cout << "Your number is: " << myInput << endl; //Display the input value
	
	/*Good To Know
	cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
	cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)
	*/
	
	//C++ MORE ON DATATYPES
	int myNewNum = 5;               // Integer (whole number) - size 4 bytes
	float myNewFloatNum = 5.99;     // Floating point number - size 4 bytes (precision 6 or 7 digits)
	double myNewDoubleNum = 9.98;   // Floating point number - size 8 bytes (precision about 15 digits)
	char myNewLetter = 'D';         // Character - size 1 byte
	bool myNewBoolean = true;       // Boolean - size 1 byte
	string myNewText = "Hello";     // String
	
	// C++ FLOAT / DOUBLE DATATYPES
	float f1 = 35e3;				// 35*10^3
	double d1 = 12E4;				// 12*10^4
	cout << f1 << endl;
	cout << d1 << endl;
	
	//C++ BOOLEAN DATA TYPES
	bool isTrue = true;
	bool isFalse = false;
	cout << isTrue << endl;	// Outputs 1 (true)
	cout << isFalse << endl;	// Outputs 0 (true)
	
	//C++ CHARACTER DATA TYPES
	//used to store a single character
	char myOldLetter = 'B';
	cout << myOldLetter << endl;
	//using ASCII values
	char aa = 65, bb = 66, cc = 67;
	cout << aa <<", " << bb << ", " << cc << endl;
	
	//C++ STRING DATA TYPES
	//to use string you need header file <string> // #include <string>
	string hello = "Hello";
	cout << hello << "\n";
	
	//C++ OPERATORS
	int xxx = 100 + 50;
	int sum1 = xxx + 250;
	int sum2 = sum1 + sum1;
	cout << sum2 << endl;
	
	//C++ ASSIGNMENT OPERATORS;
	xxx += 5; 
	/*
		=	x = 5	x = 5	
		+=	x += 3	x = x + 3	
		-=	x -= 3	x = x - 3	
		*=	x *= 3	x = x * 3	multiply
		/=	x /= 3	x = x / 3	divide
		%=	x %= 3	x = x % 3	modulo
		&=	x &= 3	x = x & 3	bitwise AND
		|=	x |= 3	x = x | 3	bitwise OR
		^=	x ^= 3	x = x ^ 3	bitwise XOR
		>>=	x >>= 3	x = x >> 3	shifts bit right
		<<=	x <<= 3	x = x << 3  shifts bit left
	*/
	
	//C++ COMPARISON OPERATORS
	cout << (sum1 > sum2) << endl;
	/*
	==	Equal to	x == y	
	!=	Not equal	x != y	
	>	Greater than	x > y	
	<	Less than	x < y	
	>=	Greater than or equal to	x >= y	
	<=	Less than or equal to	x <= y
	*/
	
	//C++ LOGICAL OPERATORS#
	/*
	&& 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
	|| 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
	!	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)
	*/
	
	//C++ STRING CONCATENATION
	string firstName = "Joe";
	string lastName = "GI";
	string fullName = firstName + " " + lastName;
	string realName = lastName.append(" ").append(firstName); //append() is faster than '+'
	cout << "Full Name: " << fullName << endl;
	cout << "Real Name: " << lastName << endl;
	
	//C++ STRING LENGTH
	string txt = "abcdefghijklmnopqrstuvwxyz";
	cout << "The length of the text string is: " << txt.length() << endl; //size() or length() or equivalent
	
	//C++ ACCESS STRINGS
	cout << txt[0]; //outputs a (first character of string starts at index 0)
	
return 0;
}
