
#include "pch.h"
#include <iostream>
using namespace std;

//PROPOTYPE
void Run_Statistics_Financing();
void mode();
void mean();
void median();
void getStdDev();
void getVariance();
void calSimpleInterest();
void calCompoundInterest();
void calARP();


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

	case '1': mean();
		break;
	case '2': median();
		break;
	case '3': mode();
		break;
	case '4': getStdDev();
		break;
	case '5': getVariance();
		break;
	case '6': calSimpleInterest();
		break;
	case '7': calCompoundInterest();
		break;
	case '8':  calARP();
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
void mean() {

	int totalNumber, num;
	int * myData;
	cout << "How many numbers would you like to type? ";
	cin >> totalNumber;
	myData = new (nothrow) int[totalNumber];
	if (myData == nullptr)
		cout << "Error: memory could not be allocated";
	else
	{
		for (num = 0; num < totalNumber; num++)
		{
			cout << "Enter number: ";
			cin >> myData[num];
		}
	}

	//GET TOTAL & CALCULATE MEAN
	float total = 0.0f;
	for (int i = 0; i < totalNumber; i++) {
		total += myData[i];
	}
	cout << "The mean is " << total / totalNumber << endl;
}

void mean(int * myData, int totalNumber) {
	int num;
	cout << "How many numbers would you like to type? ";
	cin >> totalNumber;
	myData = new (nothrow) int[totalNumber];
	if (myData == nullptr)
		cout << "Error: memory could not be allocated";
	else
	{
		for (num = 0; num < totalNumber; num++)
		{
			cout << "Enter number: ";
			cin >> myData[num];
		}
	}

	//GET TOTAL & CALCULATE MEAN
	float total = 0.0f;
	for (int i = 0; i < totalNumber; i++) {
		total += myData[i];
	}
	cout << "The mean is " << total / totalNumber << endl;
}

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
void median() {

	int totalNumber, num;
	int * myData;
	cout << "How many numbers would you like to type? ";
	cin >> totalNumber;
	myData = new (nothrow) int[totalNumber];
	if (myData == nullptr)
		cout << "Error: memory could not be allocated";
	else
	{
		for (num = 0; num < totalNumber; num++)
		{
			cout << "Enter number: ";
			cin >> myData[num];
		}
	}


	//CALCULATE THE MEDIAN (middle number)
	if (totalNumber % 2 != 0) {// is the # of elements odd?
		int temp = ((totalNumber + 1) / 2) - 1;
		cout << "The median is " << myData[temp] << endl;
	}
	else {// then it's even! :)
		cout << "The median is " << myData[(totalNumber / 2) - 1] << " and " << myData[totalNumber / 2] << endl;
	}
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
void mode() {

	int totalNumber, num;
	int * myData;
	cout << "How many numbers would you like to type? ";
	cin >> totalNumber;
	myData = new (nothrow) int[totalNumber];
	if (myData == nullptr)
		cout << "Error: memory could not be allocated";
	else
	{
		for (num = 0; num < totalNumber; num++)
		{
			cout << "Enter number: ";
			cin >> myData[num];
		}
	}

	int* ipRepetition = new int[totalNumber];
	// alocate a new array in memory of the same size (round about way of defining number of elements by a variable)
	for (int i = 0; i < totalNumber; i++) {
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
	for (int i = 1; i < totalNumber; i++) {
		if (ipRepetition[i] > ipRepetition[iMaxRepeat]) {
			iMaxRepeat = i;
		}
	}
	cout << "The mode is " << myData[iMaxRepeat] << endl;

}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
void getStdDev() {

	float totalNumber;
	int num;
	float * myData;
	cout << "How many numbers would you like to type? ";
	cin >> totalNumber;
	myData = new (nothrow) float[totalNumber];
	if (myData == nullptr)
		cout << "Error: memory could not be allocated";
	else
	{
		for (num = 0; num < totalNumber; num++)
		{
			cout << "Enter number: ";
			cin >> myData[num];
		}
	}



	float sum = 0.0, mean, variance = 0.0, stdDeviation;

	//Find mean
	for (int i = 0; i < totalNumber; ++i)
		sum += myData[i];
	mean = sum / totalNumber;

	//Find variance
	for (int i = 0; i < totalNumber; ++i)
		variance += pow(myData[i] - mean, 2);
	variance = variance / totalNumber;


	//Calculate Standard Deviation
	stdDeviation = sqrt(variance);
	cout << "The data values are: ";
	for (int i = 0; i < totalNumber; ++i)
		cout << myData[i] << " ";
	cout << endl;
	cout << "The standard deviation of these data values is " << stdDeviation;
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
void getVariance() {
	cout << "getVariance";
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
void calSimpleInterest() {
	cout << "calSimpleInterest";
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
void calCompoundInterest() {
	cout << "calCompoundInterest";
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
void calARP() {
	cout << "calARP";
}
