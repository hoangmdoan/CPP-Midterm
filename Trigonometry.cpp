#include <iostream>
#include <iomanip>
#include <string>
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

}
