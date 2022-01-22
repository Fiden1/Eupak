#include <iostream>

using namespace std;
int main() {

	int q = 28;
	int	w = 30;
	int	e = 31;
	int	a = 0;
	cout << "¬ведите номер мес€ца:";
	cin >> a;
	if (a < 1) { cout << "ќшибка ввода мес€ца" << endl; }
	if (a < 2) { cout << " оличество дней в мес€це: " << e << endl; }
	else if (a < 3) { cout << " оличество дней в мес€це: " << q << endl; }
	else if (a < 4) { cout << " оличество дней в мес€це: " << e << endl; }
	else if (a < 5) { cout << " оличество дней в мес€це: " << w << endl; }
	else if (a < 6) { cout << " оличество дней в мес€це: " << e << endl; }
	else if (a < 7) { cout << " оличество дней в мес€це: " << w << endl; }
	else if (a < 8) { cout << " оличество дней в мес€це: " << e << endl; }
	else if (a < 9) { cout << " оличество дней в мес€це: " << e << endl; }
	else if (a < 10) { cout << " оличество дней в мес€це: " << w << endl; }
	else if (a < 11) { cout << " оличество дней в мес€це: " << e << endl; }
	else if (a < 12) { cout << " оличество дней в мес€це: " << w << endl; }
	else if (a < 13) { cout << " оличество дней в мес€це: " << e << endl; }
	else if (a > 12) { cout << "ќшибка ввода мес€ца" << endl; }
	return 0;