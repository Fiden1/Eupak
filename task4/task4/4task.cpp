#include <iostream>

using namespace std;
int main() {

	int q = 28;
	int	w = 30;
	int	e = 31;
	int	a = 0;
	cout << "������� ����� ������:";
	cin >> a;
	if (a < 1) { cout << "������ ����� ������" << endl; }
	if (a < 2) { cout << "���������� ���� � ������: " << e << endl; }
	else if (a < 3) { cout << "���������� ���� � ������: " << q << endl; }
	else if (a < 4) { cout << "���������� ���� � ������: " << e << endl; }
	else if (a < 5) { cout << "���������� ���� � ������: " << w << endl; }
	else if (a < 6) { cout << "���������� ���� � ������: " << e << endl; }
	else if (a < 7) { cout << "���������� ���� � ������: " << w << endl; }
	else if (a < 8) { cout << "���������� ���� � ������: " << e << endl; }
	else if (a < 9) { cout << "���������� ���� � ������: " << e << endl; }
	else if (a < 10) { cout << "���������� ���� � ������: " << w << endl; }
	else if (a < 11) { cout << "���������� ���� � ������: " << e << endl; }
	else if (a < 12) { cout << "���������� ���� � ������: " << w << endl; }
	else if (a < 13) { cout << "���������� ���� � ������: " << e << endl; }
	else if (a > 12) { cout << "������ ����� ������" << endl; }
	return 0;