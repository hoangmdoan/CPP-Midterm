// ConsoleApplication_Tri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

// Variables for calculations
const float PI = 3.14159;
const float TERMS = 7.0; // Number of terms used for the Taylor Series
int Degrees = Degrees %= 360;// To ensure that the answers are no more than 360 deg!
int Anwser;
float InputValue;//The number you put in to find the trig identity of
float Sin,Tan,Sec,Csc,Cot = 0;
long double  InverseSin, InverseCos, InverseTan;

// Constants for menu choice
const int Sine = 1,
Cosine = 2,
Tangent = 3,
Secant = 4,
Cosecant = 5,
Cotangent = 6,
InverseSine = 7,
InverseCosine = 8,
InverseTangent = 9,
Exit = 10;

//Function prototypes
void showMenu();
float getSine(int);
float getCosine(int);
float getTangent(int);
float getSecant(int);
float getCosecant(int);
float getCotangent(int);
float getInvereSine(int);
float getInverseCosine(int);
float getInverseTangent(int);

float Power(float, int);
int Fact(int);



int main()
{
//run menu
	//cout << "Pow 2^3 is: " << Power(2,3) <<endl;
	//cout << "Fact 3 is: " << Fact(3);
	showMenu();
return 0;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
void showMenu() {
	//define menu here
	cout << "What would you like to calculate?\n\n"
		<< "1. Sine\n"
		<< "2. Cosine\n"
		<< "3. Tangent\n"
		<< "4. Secant\n"
		<< "5. Cosecant\n"
		<< "6. Cotangent\n"
		<< "7. Inverse Sin\n"
		<< "8. Inverse Cos\n"
		<< "9. Inverse Tan\n"
		<< "10. Exit\n\n"
		<< "Enter your choice: ";
	cout << "Choose one option: ";

	char menu_choice;
	cin >> menu_choice;
	cout << endl;
	switch (menu_choice)
	{

	case '1':
		int myData;
		cout << "What would you like to find the sine of?\n"
			<< "Enter your answer in Radians:";
		cin >> myData;
		getSine(myData);
		break;
	case '2':
	//	int myData;
		cout << "What would you like to find the cos of?\n"
			<< "Enter your answer in Radians:";
		cin >> myData;
		getCosine(myData);
		break;
	case '3':
	//	int myData;
		cout << "What would you like to find the cos of?\n"
			<< "Enter your answer in Radians:";
		cin >> myData;
		getTangent(myData);
		break;
	case '4':
	//	int myData;
		cout << "What would you like to find the cos of?\n"
			<< "Enter your answer in Radians:";
		cin >> myData;
		getSecant(myData);
		break;
	case '5':
	//	int myData;
		cout << "What would you like to find the cos of?\n"
			<< "Enter your answer in Radians: ";
		cin >> myData;
		getCosecant(myData);
		break;
	case '6':
	//	int myData;
		cout << "What would you like to find the cos of?\n"
			<< "Enter your answer in Radians: ";
		cin >> myData;
		getCotangent(myData);
		break;
	case '7':
	//	int myData;
		cout << "What would you like to find the cos of?\n"
			<< "Enter your answer in Radians: ";
		cin >> myData;
		getInvereSine(myData);
		break;
	case '8':
	//	int myData;
		cout << "What would you like to find the cos of?\n"
			<< "Enter your answer in Radians: ";
		cin >> myData;
		getInverseCosine(myData);
		break;

	case '9':
	//	int myData;
		cout << "What would you like to find the cos of?\n"
			<< "Enter your answer in Radians: ";
		cin >> myData;
		getInverseTangent(myData);
		break;

	case '10':
		break;
	default:
		cout << "We're sorry. Menu choice must be "
			<< "1-8.\n"
			<< "Rerun the program and try again."
			<< endl;
		break;
	}
	cout << endl;
}

// Equation for evaluating the powers of a number

float Power(float base, int exp) {
	if (exp < 0) {
		if (base == 0)
			return -0; // Error!!
		return 1 / (base * Power(base, (-exp) - 1));
	}
	if (exp == 0)
		return 1;
	if (exp == 1)
		return base;
	return base * Power(base, exp - 1);
}

int Fact(int n) {
	return n <= 0 ? 1 : n * Fact(n - 1);
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

float getSine(int myNum) {
	myNum %= 360; // make it less than 360
	float rad = myNum * PI / 180;
	float sin = 0;
	for (int i = 0; i < TERMS; i++) { // That's Taylor series!!
		sin += Power(-1, i) * Power(rad, 2 * i + 1) / Fact(2 * i + 1);
	}
	cout << "The sin of the given value is " << sin << " radians." << endl;
	return sin;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getCosine(int myNum) {
	cout << "welcome to my getCosine" << endl;
	float myCosine = 0;
	//body of code Cosine




	return myCosine;
}

//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getTangent(int myNum) {
	cout << "welcome to my getTangent" << endl;
	float myTanget = 0;



	return myTanget;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getSecant(int myNum) {
	cout << "welcome to my getSecant" << endl;
	float mySecant = 0;


	return mySecant;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getCosecant(int myNum) {
	cout << "welcome to my getCosecant" << endl;
	float myCoseant = 0;

	return myCoseant;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getCotangent(int myNum) {
	cout << "welcome to my getCotangent" << endl;
	float myCotangent = 0;



	return myCotangent;
}

//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getInvereSine(int myNum) {
	cout << "welcome to my getInvereSine" << endl;
	float myInvereSine = 0;


	return myInvereSine;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getInverseCosine(int myNum) {
	cout << "welcome to my getInverseCosine" << endl;
	float myInverseCosine = 0;




	return myInverseCosine;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getInverseTangent(int myNum) {
	cout << "welcome to my getInverseTangent" << endl;
	float myInverseTangent = 0;




	return myInverseTangent;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
