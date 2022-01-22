
#include <iostream>
using namespace std;

int main()
{
	int mainNumber = 0;
	int result = 0;
	int  number1 = 0;
	int  number2 = 0;
	int  number3 = 0;
	int  number4 = 0;
	cout << "enter any four-digit number" << endl;
	cin >> mainNumber;
	if (999 < mainNumber && mainNumber < 10000) {
		number1 = (mainNumber % 10);
		mainNumber /= 10;
		number2 = (mainNumber % 10);
		mainNumber /= 10;
		number3 = (mainNumber % 10);
		mainNumber /= 10;
		number4 = (mainNumber % 10);
		cout << number1<< number2 << number3<< number4;
	}
	else { cout << "enter four-digit number"; }
}
