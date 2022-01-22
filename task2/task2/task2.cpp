
#include <iostream>
using namespace std;

int main()
{
	int number1 = 0;
	int number2 = 0;
	int result = 0;
	cout << "Enter 1 number" << endl;
	cin >> number1;
	cout << "Enter 2 number" << endl;
	cin >> number2;
	cout << "what is the result of multiplication?" << endl;
	cin >> result;
	if (number1 * number2 == result) {
		cout << "this is right";
	}
	else {
		cout << "this is wrong, correct answer :"<< number1 * number2;
	}

}

