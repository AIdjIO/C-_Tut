#include <iostream>
#include <string>
#include <cmath>
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
		=	x = 5	x = 5		assign
		+=	x += 3	x = x + 3	add
		-=	x -= 3	x = x - 3	subtract
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
	==	Equal to					x == y	
	!=	Not equal					x != y	
	>	Greater than				x > y	
	<	Less than					x < y	
	>=	Greater than or equal to	x >= y	
	<=	Less than or equal to		x <= y
	*/
	
	//C++ LOGICAL OPERATORS#
	/*
	&& 	Logical and	Returns true if both statements are true
		x < 5 &&  x < 10	
	|| 	Logical or	Returns true if one of the statements is true
		x < 5 || x < 4	
	!	Logical not	Reverse the result, returns false if the result is true
		!(x < 5 && x < 10)
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
	cout << txt[0] << "\n"; //outputs a (first character of string starts at index 0)
	txt[0] = 'A'; // change string character
	cout << txt <<"\n";
	
	//C++ USER INPUT STRINGS
	string newName;
	cout << "Enter your first name: ";
	cin >> newName; // get user input from keyboard
	//cin considers a space (whitespace, tabs, etc) as terminating character,
	//which mean that it can only display a sing word (even if you type many words)
	cout << "Your name is: " << newName << "\n";
	
	//to read a line of text use getline() function instead
	string urName;
	cout << "Type your full name: \n";
	getline(cin, urName);
	cout << "Your name is: " << urName << "\n";
	
	//C++ STRING NAMESPACE
	//The "using namespace std" can be omitted and replaced with "std::" instead
	std:cout << "Hello";
	
	//C++ MATH
	cout << max(5,10) << "\n";
	cout << min(5,10) << "\n";
	//other functions, such asquare root (sqrt), rounding number (round) and natural logarithm (log) can be found in the cmath header file.

	cout << sqrt(64) << "\n";
	cout << round(2.6) << "\n";
	cout << log(2.71828) << "\n";
	cout << exp(1) << "\n";
	
	//from the cmath library
	/*
	abs(x)	Returns the absolute value of x
	acos(x)	Returns the arccosine of x, in radians
	asin(x)	Returns the arcsine of x, in radians
	atan(x)	Returns the arctangent of x, in radians
	cbrt(x)	Returns the cube root of x
	ceil(x)	Returns the value of x rounded up to its nearest integer
	cos(x)	Returns the cosine of x, in radians
	cosh(x)	Returns the hyperbolic cosine of x, in radians
	exp(x)	Returns the value of Ex
	expm1(x)	Returns ex -1
	fabs(x)	Returns the absolute value of a floating x
	fdim(x, y)	Returns the positive difference between x and y
	floor(x)	Returns the value of x rounded down to its nearest integer
	hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
	fma(x, y, z)	Returns x*y+z without losing precision
	fmax(x, y)	Returns the highest value of a floating x and y
	fmin(x, y)	Returns the lowest value of a floating x and y
	fmod(x, y)	Returns the floating point remainder of x/y
	pow(x, y)	Returns the value of x to the power of y
	sin(x)	Returns the sine of x (x is in radians)
	sinh(x)	Returns the hyperbolic sine of a double value
	tan(x)	Returns the tangent of an angle
	tanh(x)	Returns the hyperbolic tangent of a double value
	*/
	
	//C++ IF ... ELSE
	//Conditions and if statements
	//C++ supports the usual logical conditions from mathematics:
	/*
	Less than: a < b
	Less than or equal to: a <= b
	Greater than: a > b
	Greater than or equal to: a >= b
	Equal to a == b
	Not Equal to: a != b
	*/
	//if
	if (20>18){
		cout << "20 is greater than 18\n";
	}
	
	//if ... else
	int time = 20;
	if (time < 18){
		cout << "Good day.\n";
	}
	else{
		cout << "Good evening.\n";
	}
	
	//if ... else if ... else
	int newTime = 22;
	if (newTime<10){
		cout << "Good morning.\n";
	}
	else if (time <20){
		cout << "Good day.\n";
	}
	else{
		cout << "Good evening.\n";
	}
	
	//short hand if ... else (ternary operator) because it consists of 3 operands.
	int oldTime = 20;
	string result = (oldTime < 18) ? "Good day.\n" : "Good evening.\n";
	cout << result;
	
	//C++ SWITCH
	int day = 4;
	switch (day){
		case 1:
			cout << "Monday";
			break; // breaks out of the switch block (no need to test other cases when match is found), however "break is optional but highly recommended.
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday";
			break;
		default: // code to run if no match is found.
			cout << "Holiday";
	}
	cout << "\n";
	
	//C++ WHILE LOOP
	int i = 0;
	while (i<5) {
		cout << i << "\n";
		i++;
	}
	
	//C++ DO WHILE LOOP
	int j = 0;
	do {
		cout << j << "\n";
		j++;
	} while (j < 5);
	
	//C++ FOR LOOP
	/*
	for (statement 1; statement 2; statement 3) {
		code block to be executed
		}
	Statement 1 is executed (one time) before the execution of the code block.
	Statement 2 defines the condition for executing the code block.
	Statement 3 is executed (every time) after the code block has been executed.
	*/
	
	for (int i = 0; i<5; i++){
		cout << i << "\n";
	}
	
	for (int i = 0; i<=10; i++){
		cout << i << "\n";
	}
	
	//C++ BREAK AND CONTINUE
	//break (can also be used in while loop)
	for (int i = 0; i < 10; i++){
		if (i == 4){
			break; // breaks out of the loop
		}
		cout << i << "\n";
	}
	
	//continue (can also be used in while loop)
	for (int i = 0; i < 10; i++){
		if (i == 4){
			continue; //(jumps to the next interation)
		}
		cout << i << "\n";
	}
	
	//C++ ARRAYS
	//string cars[4]; // array declaration to hold 4 strings (not initialised).
	string cars[4] = {"Volvo","BMW","Ford","Mazda"}; //declaration and initialisation
	int arrayNum[3]={10,20,30};
	//access elements of an array (index starts at 0)
	cout << cars[0] + "\n";
	//change an element of an array
	cars[0]="Opel";
	cout << cars[0] + "\n";
	
	//C++ ARRAYS AND LOOPS
	//array elements
	for (int i=0; i<4; i++){
		cout << cars[i] << "\n";
	}
	
	//array index and elements
	for (int i=0; i<4; i++){
		cout << i << ": " << cars[i] << "\n";
	}
	
	//C++ OMIT ARRAY SIZE
	string vehicle[]={"Volvo", "BMW", "Ford"}; //size of array is now fixed to 3
	//if need to add extra elements then neew to overwrite the array
	string vehicles[]={"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
	//if specify size extra space will be reserved
	string newVehicle[5] = {"Volvo", "BMW", "Ford"};
	newVehicle[3]={"Mazda"};
	newVehicle[4]={"Tesla"};
	//omit elements on declaration
	string oldVehicle[5];
	oldVehicle[0]={"Volvo"};
	oldVehicle[1]={"BMW"};
	
	//C++ REFERENCES
	string food = "Pizza"; //variable
	string &meal = food;   //reference to variable
	cout << food << "\n";
	cout << meal << "\n";
	cout << &food << "\n"; //& also gives the address of the variable in memory
	cout << &meal << "\n"; //this gives the memory address of food becuase it reference it
	
	//C++ POINTERS
	//A pointer is a variable that stores the memory address of a variable of the same type
	//create pointer
	string fruit="tomato";
	string* fruitPointer=&fruit;
	cout << fruit << "\n"; //output the value of fruit
	cout << &fruit << "\n"; //output the memory address of fruit
	cout << fruitPointer << "\n"; //output the memory address of fruit with the pointer.
	
	//C++ dereference
	string drink="coffee";
	string* ptrDrink = &drink; // '*' here is used to create a variable
	cout << ptrDrink << "\n";
	cout << *ptrDrink << "\n"; // '*' is dereference operator
	
	//C++ modify pointers
	string animal = "chicken";
	string* ptrAnimal = &animal;
	cout << animal << "\n"; //output the value of animal
	cout << &animal << "\n"; //output the address of animal
	cout << *ptrAnimal << "\n"; //access the address of animal and output its value
	*ptrAnimal = "dog"; //change the value of the pointer
	cout << *ptrAnimal << "\n"; //output the new value of the pointer
	cout << animal << "\n"; //output the new value of the aniumal variable
	
	
	return 0;
}
