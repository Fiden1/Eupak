#include <iostream>
 
using namespace std;
int main() {

	int q = 28;
	int	w = 30;
	int	e = 31;
	int	a = 0;
	cout << "Введите номер месяца:";
	cin >> a;
	if (a < 1) { cout << "Ошибка ввода месяца" << endl; }
	if (a < 2) { cout << "Количество дней в месяце: " << e << endl; }
	else if (a < 3) { cout << "Количество дней в месяце: " << q << endl; }
	else if (a < 4) { cout << "Количество дней в месяце: " << e << endl; }
	else if (a < 5) { cout << "Количество дней в месяце: " << w << endl; }
	else if (a < 6) { cout << "Количество дней в месяце: " << e << endl; }
	else if (a < 7) { cout << "Количество дней в месяце: " << w << endl; }
	else if (a < 8) { cout << "Количество дней в месяце: " << e << endl; }
	else if (a < 9) { cout << "Количество дней в месяце: " << e << endl; }
	else if (a < 10) { cout << "Количество дней в месяце: " << w << endl; }
	else if (a < 11) { cout << "Количество дней в месяце: " << e << endl; }
	else if (a < 12) { cout << "Количество дней в месяце: " << w << endl; }
	else if (a < 13) { cout << "Количество дней в месяце: " << e << endl; }
	else if (a > 12) { cout << "Ошибка ввода месяца" << endl; }
	return 0;
}
