//C++ OOP

#include <iostream>
using namespace std;

//C++ Classes and Objects

//CREATE A CLASS
class myClass {	//the class
	public:		//access specifier
	int myNum;
	string myString;
};	

class car{
	public:
	string brand;
	string color;
	string model;
	int year;
};

//C++ CLASS METHODS
//option 1: create a method inside the class
class inner {
	public:
	void innerMethod() {
		cout << "Hello, I am a method defined inside the class.\n";
	}
};

//option 2: create a method outside the class
class outer {
	public:
	void outerMethod();
};

void outer::outerMethod(){
	cout << "Hello, I am a method defined outside the class.\n";
}

//method can also have parameters just like function regardless if it's defined inside or outside the class.
class vehicle{
	public:
		int vehicleSpeed (int maxSpeed);
};

int vehicle::vehicleSpeed(int maxSpeed){
	return maxSpeed;
}

//CONSTRUCTOR
class theConstructor {
	public:
		theConstructor() {
			cout << "Hello, I am a constructor.\n";
		}
};

//Constructor parameters
class boat {				//class name
	public: 			//access specifier
		string type; 		//attribute
		int year; 		//attribute
		boat(string x, int y){ // constructor with parameters
			type = x;
			year =y;
		}

		void whatBoat(){	//method
			cout << "This is a " << type << " from " << year << "\n";
		}
};

//Constructor definition outside the class
class motorcycle {
	public:
		string make;
		int engineSize;
		int topSpeed;
		motorcycle(string x, int y, int z);
		void bikeDetails();
};

motorcycle::motorcycle(string x, int y,int z){
	make=x;
	engineSize=y;
	topSpeed=z;
};

void motorcycle::bikeDetails(){
	cout << "o/o>\n";
	cout << "Make: " << make << "\n";
	cout << "Engine Size: "  << engineSize <<" cc\n";
	cout << "Top Speed: " << topSpeed << " mph\n";
};

//access specifiers
/*
public:	 	members are accessible from outside the class.
private: 	members cannot be accessed fromt ouside the class.
protected: 	members cannot be accessed from outside the class but can be accessed in inherited classes.
by default all members are private if access specifier is not specified.*/

class specifierClass {
	public:
		int x;
	private:
		int y;
};

//Create an object (instance of the class)
int main(){
	 myClass myObj; //create an object of myClass
	 myClass myObj2; //create another object of myClass
	 
	 //access atributes and set values
	 myObj.myNum = 15;
	 myObj.myString ="Some text";
	 
	 myObj2.myNum = 20;
	 myObj2.myString = "Hellow World!";
	 	 
	 //Print attribute values
	 cout << myObj.myNum << "\n";
	 cout << myObj.myString << "\n";
	 
	 //create multiple object of the same class
	 car car1;
	 car car2;
	 
	 //initialise object
	 car1.color="red";
	 car1.brand="Citroen";
	 car1.year=1948;
	 car1.model="2CV";
	 
	 //initialise object
	 car2.color="yellow";
	 car2.brand="Lucid";
	 car2.model="Air";
	 car2.year=2020;
	 
	 cout << "He drives a " << car1.color << " " <<car1.brand << " " << car1.model << " from " << car1.year << ".\n";
	 
	 cout << "She drives a " << car2.color << " " << car2.brand << " " << car2.model << " from " << car2.year << ".\n";
	 	 
	 inner innerObj; //create object of class innerCLass
	 innerObj.innerMethod(); //call method of the class on innerObj object.
	 
	 outer outerObj; //create object of class outerClass
	 outerObj.outerMethod();
	 
	 vehicle electricCar;
	 cout << "max speed " << electricCar.vehicleSpeed(200) << " mph.\n";
	 
	 theConstructor constructorObj; //constructor method gets called automatically on object creation.
	boat myBoat("yacht",2002);
	myBoat.whatBoat();

	motorcycle myBike("Hayabusa", 1299, 189);
	myBike.bikeDetails();

	specifierClass example;
	example.x = 0; //Allowed (public)
	// example.y= 2; //Not allowed (private)
	// will cause (error: ‘int specifierClass::y’ is private within this context) during compilation.
       	
	 return 0;
}
