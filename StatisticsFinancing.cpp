#include <iostream>
using namespace std;

//PROPOTYPE
void Run_Statistics_Financing();
float getMode(float*);
float getMean(float*);
float getMedian(float*);
float getStdDev(float*);
float getVariance(float*);
float calSimpleInterest();
float calCompoundInterest();
void calARP();
float* getData();

int getTotal = 0;

//MAIN 
int main()
{

	Run_Statistics_Financing();
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
//BEGIN Statistics Financing
void Run_Statistics_Financing() {
	char menu_choice;
	cout << "\(1) Mean\n"
		<< endl
		<< "\(2) Median\n"
		<< endl
		<< "\(3) Mode\n"
		<< endl
		<< "\(4) Standard deviation\n"
		<< endl
		<< "\(5) Variance\n"
		<< endl
		<< "\(6) Simple Interest\n"
		<< endl
		<< "\(7) Compound Interest\n"
		<< endl
		<< "\(8) APR Financing\n"
		<< endl;

	cout << "Choose one option: ";
	cin >> menu_choice;
	cout << endl;

	switch (menu_choice)
	{

	case '1':
		getMean(getData());
		break;
	case '2':
		getMedian(getData());
		break;
	case '3':
		getMode(getData());
		break;
	case '4':
		getStdDev(getData());
		break;
	case '5':
		getVariance(getData());
		break;
	case '6':
		calSimpleInterest();
		break;
	case '7':
		calCompoundInterest();
		break;
	case '8':
		calARP();
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
//GET DATA
float* getData() {
	float* myData;
	//int getTotal;
	cout << "How many numbers would you like to type? ";
	cin >> getTotal;
	myData = new (nothrow) float[getTotal];
	if (myData == nullptr)
		cout << "Error: memory could not be allocated";
	else
	{
		for (int i = 0; i < getTotal; i++)
		{
			cout << "Enter number: ";
			cin >> myData[i];
		}
	}
	return myData;
}


///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
float getMean(float* myData) {
	float mean;
	//GET TOTAL & CALCULATE MEAN
	float total = 0.0f;
	for (int i = 0; i < getTotal; i++) {
		total += myData[i];
	}
	//cout << "The size of is " << getTotal << endl;
	//cout << "The total is " << total << endl;
	mean = total / getTotal;
	cout << "The mean is " << mean << endl;
	return mean;
}

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
float getMedian(float* myData) {
	float myMedian = 0.0;
	if ((getTotal) % 2 != 0) {// is the # of elements odd?
		int temp = (((getTotal)+1) / 2) - 1;
		myMedian = myData[temp];
		cout << "The median is " << myData[temp] << endl;
	}
	else {// then it's even! :)
		myMedian = myData[(getTotal / 2) - 1];
		cout << "The median is " << myData[(getTotal / 2) - 1] << " and " << myData[getTotal / 2] << endl;
	}
	return myMedian;

}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
float getMode(float* myData) {

	int* ipRepetition = new int[getTotal];
	// alocate a new array in memory of the same size (round about way of defining number of elements by a variable)
	for (int i = 0; i < getTotal; i++) {
		ipRepetition[i] = 0;//initialize each element to 0
		int j = 0;//
		while ((j < i) && (myData[i] != myData[j])) {
			if (myData[i] != myData[j]) {
				j++;
			}
		}
		(ipRepetition[j])++;
	}
	int iMaxRepeat = 0;
	for (int i = 1; i < getTotal; i++) {
		if (ipRepetition[i] > ipRepetition[iMaxRepeat]) {
			iMaxRepeat = i;
		}
	}
	cout << "The mode is " << myData[iMaxRepeat] << endl;
	return myData[iMaxRepeat];
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
float getStdDev(float* myData) {

	float sum = 0.0, stdDeviation = 0.0;
	//Calculate Standard Deviation
	stdDeviation = sqrt(getVariance(myData));
	cout << "The data values are: ";
	for (int i = 0; i < getTotal; ++i)
		cout << myData[i] << " ";
	cout << endl;
	cout << "The standard deviation of these data values is " << stdDeviation;
	return stdDeviation;
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
float getVariance(float* myData) {
	float variance = 0.0;
	for (int i = 0; i < getTotal; ++i)
		variance += pow(myData[i] - getMean(myData), 2);
	variance = variance / getTotal;
	cout << "The variance of these data values is " << variance;
	return variance;
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
float calSimpleInterest() {
	float amount, rate, time, si;

	cout << "Enter Principal Amount: ";
	cin >> amount;

	cout << "Enter Rate of Interest: ";
	cin >> rate;

	cout << "Enter Period of Time: ";
	cin >> time;

	si = (amount * rate * time) / 100;
	cout << "Simple Interest: " << si;
	return si;
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
float calCompoundInterest() {
	cout << "calCompoundInterest";
	float p, r, t, ci;

	cout << "Enter Principle, Rate and Time:\n";
	cin >> p >> r >> t;

	ci = p * pow((1 + r / 100), t);

	cout << "\nCompound Interest = " << ci;

	return ci;
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
void calARP() {
	double monthlyPayment;
	double balance;
	double interestRate;
	double interestPaid;
	double initialBalance;
	int termOfLoan;
	double loanedFee;
	double upFrontFee;
	int month = 0;
	int year = 0;
	//Enter data
	cout << "Enter the loan amount: $";
	cin >> balance;
	cout << "Enter the loan term. How many years? : $";
	cin >> year;
	cout << "Enter the loan term. How many months? : $";
	cin >> month;
	cout << "Enter the interest rate (compounded monthly) : ";
	cin >> interestRate;
	cout << "Enter the Loaned Fees : ";
	cin >> loanedFee;
	cout << "Enter the Upfont Fees : ";
	cin >> upFrontFee;

	//calculate loan term
	termOfLoan = 12 * year + month;


	cout << "\n\n";
	cout << "Amount Financed:                                        $" << balance + loanedFee << endl;
	cout << "Upfront Out-of-Pocket Fees:                             $" << upFrontFee << endl;
	cout << "Payment Every Month:									 $" << balance << endl;
	cout << "Total of " << termOfLoan  <<" Payments:			     $" << termOfLoan << endl;
	cout << "Total Interest:"										<< interestRate << "%" << endl;
	cout << "Number Of Payments:"									<< termOfLoan << endl;
	cout << "All Payments and Fees:									 $" <<".........."  << endl;
}
