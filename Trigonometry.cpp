#include <iostream>
using namespace std;

//Function prototypes
void showMenu();
float getSine(float);
float getCosine(float);
float getTangent(float);
float getSecant(float);
float getCosecant(float);
float getCotangent(float);
float getInvereSine(float);
float getInverseCosine(float);
float getInverseTangent(float);



int main()
{
//run menu
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
		getSine(0);
		break;
	case '2':
		//getCosine(0);
		break;
	case '3':
		//getTangent(0);
		break;
	case '4':
	//	getSecant(0);
		break;
	case '5':
	//	getCosecant(0);
		break;
	case '6':
	//	getCotangent(0);
		break;
	case '7':
	//	getInvereSine(0);
		break;
	case '8':
	//	getInverseCosine(0);
		break;

	case '9':
	//	getInverseTangent(0);
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

//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

float getSine(float myNum) {
	cout << "welcome to my getSine" << endl;
	float mySin = 0;
	//body code of Sine
	return mySin;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getCosine(float myNum) {
	cout << "welcome to my getCosine" << endl;
	float myCosine = 0;
	//body of code Cosine




	return myCosine;
}

//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getTangent(float myNum) {
	cout << "welcome to my getTangent" << endl;
	float myTanget = 0;



	return myTanget;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getSecant(float myNum) {
	cout << "welcome to my getSecant" << endl;
	float mySecant = 0;


	return mySecant;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getCosecant(float myNum) {
	cout << "welcome to my getCosecant" << endl;
	float myCoseant = 0;

	return myCoseant;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getCotangent(float myNum) {
	cout << "welcome to my getCotangent" << endl;
	float myCotangent = 0;



	return myCotangent;
}

//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getInvereSine(float myNum) {
	cout << "welcome to my getInvereSine" << endl;
	float myInvereSine = 0;


	return myInvereSine;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getInverseCosine(float myNum) {
	cout << "welcome to my getInverseCosine" << endl;
	float myInverseCosine = 0;




	return myInverseCosine;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
float getInverseTangent(float myNum) {
	cout << "welcome to my getInverseTangent" << endl;
	float myInverseTangent = 0;




	return myInverseTangent;
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
