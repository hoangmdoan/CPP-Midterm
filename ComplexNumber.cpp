#include <iostream>
using namespace std;

//PROPOTYPE
void Run_ComplexNumber();
void multiply();
void add();
void subtract();
void conjugate();
void polartoRectangular();
void rectangulartoPorlar();
void display();

const double PI = 3.14159;
const double TERMS = 7.0;

//Variables
float real = 0;
float imag = 0;

//MAIN 
int main()
{

	Run_ComplexNumber();
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
//BEGIN Run_Complex Number
void Run_ComplexNumber() {


	char menu_choice;
	cout << "\(1) Multiplication\n"
		<< endl
		<< "\(2) Addition\n"
		<< endl
		<< "\(3) Subtraction\n"
		<< endl
		<< "\(4) Conjugate\n"
		<< endl
		<< "\(5) Polar to Rectangular\n"
		<< endl
		<< "\(6) Rectangular to Polar\n"
		<< endl;

	cout << "Choose one option: ";
	cin >> menu_choice;
	cout << endl;

	switch (menu_choice)
	{

	case '1':
		multiply();
		break;
	case '2':
		add();
		break;
	case '3':
		subtract();
		break;
	case '4':
		conjugate();
		break;
	case '5':
		polartoRectangular();
		break;
	case '6':
		rectangulartoPorlar();
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
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

/* Function to display the sum of two complex numbers */
void display(){
	if (imag > 0) {
		//<< std::setprecision(digits) << d << "\n";
		//d (rounded to 3 digits) = 0.333

		cout << real << "+" << imag << "i" << endl;
	}
	else {
		cout << real << imag << "i" << endl;
	}

}

float power(float base, int exp) {
	if (exp < 0) {
		if (base == 0)
			return -0; // Error!!
		return 1 / (base * power(base, (-exp) - 1));
	}
	if (exp == 0)
		return 1;
	if (exp == 1)
		return base;
	return base * power(base, exp - 1);
}

int fact(int n) {
	return n <= 0 ? 1 : n * fact(n - 1);
}



float sine(int deg) {
	deg %= 360; // make it less than 360
	float rad = deg * PI / 180;
	float sin = 0;

	int i;
	for (i = 0; i < TERMS; i++) { // That's Taylor series!!
		sin += power(-1, i) * power(rad, 2 * i + 1) / fact(2 * i + 1);
	}
	return sin;
}

float cosine(int deg) {
	deg %= 360; // make it less than 360
	float rad = deg * PI / 180;
	float cos = 0;

	int i;
	for (i = 0; i < TERMS; i++) { // That's also Taylor series!!
		cos += power(-1, i) * power(rad, 2 * i) / fact(2 * i);
	}
	return cos;
}


float my_atan(float x)
{
	return x - (x*x*x) / 3 + (x*x*x*x*x) / 5 - (x*x*x*x*x*x*x) / 7;
}


///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////


void multiply() {
	real = 0;
	imag = 0;
	int r1, r2, img1, img2;
	cout << "Enter real and imaginary part of first complex number" << endl;
	cin >> r1;
	cin >> img1;
	cout << "Enter real and imaginary part of second complex number" << endl;
	cin >> r2;
	cin >> img2;
	cout << "Sum of two complex numbers is" << endl;
	real = r1 * r2;
	imag = img1 * img2;
	display();

}

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////


void add() {
	real = 0;
	imag = 0;
	int r1, r2, img1, img2;
	cout<<"Enter real and imaginary part of first complex number"<<endl;
	cin >> r1;
	cin >> img1;
	cout<<"Enter real and imaginary part of second complex number"<<endl;
	cin >> r2;
	cin >> img2;
	cout<<"Sum of two complex numbers is"<<endl;
	real = r1+ r2;
	imag = img1 + img2;
	display();

}

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////


void subtract() {
	real = 0;
	imag = 0; 
	int r1, r2, img1, img2;
	cout << "Enter real and imaginary part of first complex number" << endl;
	cin >> r1;
	cin >> img1;
	cout << "Enter real and imaginary part of second complex number" << endl;
	cin >> r2;
	cin >> img2;
	cout << "Sum of two complex numbers is" << endl;
	real = r1 - r2;
	imag = img1 - img2;
	display();

}

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////


void conjugate() {
	real = 0;
	imag = 0;
	int r1, img1;
	cout << "Enter real and imaginary part of complex number" << endl;
	cin >> r1;
	cin >> img1;

	real = r1;
	imag = -(img1);
	display();
}


///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////


void polartoRectangular() {
	real = 0;
	imag = 0;
	int r, a;
	cout << "Enter the radius:" << endl;
	cin >> r;
	cout << "Enter the angle:" << endl;
	cin >> a;

	real = r*cos(a);
	imag = r*sin(a);

	display();
}

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

float sqroot(float square)
{
	float root = square / 3;
	int i;
	if (square <= 0) return 0;
	for (i = 0; i < 32; i++)
		root = (root + square / root) / 2;
	return root;
}


void rectangulartoPorlar() {
	float r1, img1;
	float r, a;
	cout << "Enter real part of complex number" << endl;
	cin >> r1;
	cout << "Enter imaginary part of complex number" << endl;
	cin >> img1;

	r = sqroot(power(r1, 2) + power(img1, 2));
	a = my_atan(img1 / r1);
	cout << "Radius: " << r << endl;
	cout << "Angle: " << a;

}


