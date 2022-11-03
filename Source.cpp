#include <iostream>
using namespace std;

int main() {
	//declaration
	int userNumToBeSquared;
	int userNumToBeCubed;
	int userNum1;
	int userNum2;
	int squaredResult;
	int cubedResult;
	int modulusResult;

	cout << "Enter an integer to be squared: ";
	cin >> userNumToBeSquared;
	cout << userNumToBeSquared << " squared equals " << (userNumToBeSquared * userNumToBeSquared) << endl <<
		endl;

	cout << "Enter an integer to be cubed: ";
	cin >> userNumToBeCubed;
	cout << userNumToBeCubed << " cubed equals " << (userNumToBeCubed * userNumToBeCubed * userNumToBeCubed) << endl <<
		endl;

	cout << "Enter integer 1: ";
	cin >> userNum1; 

	cout << "Enter integer 2:";
	cin >> userNum2;

	cout << "The remainder of " << userNum1 << " divided by " << userNum2 << " equals " << (userNum1 % userNum2)
		<< endl;

	system("pause");
	return 0;


}