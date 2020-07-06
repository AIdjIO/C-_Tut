//C++ OOP

#include <iostream>
using namespace std;

//C++ Classes and Objects

//Create a Class
class myClass {	//the class
	public:		//access specifier
	int myNum;
	string myString;
};

//Create an object (instance of the class)
int main(){
	 myClass myObj; //create an object of myClass
	 
	 //access atributes and set values
	 myObj.myNum = 15;
	 myObj.myString ="Some text";
	 
	 //Print attribute values
	 cout << myObj.myNum << "\n";
	 cout << myObj.myString << "\n";
	 return 0;
}

