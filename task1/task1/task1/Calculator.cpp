#include "Calculator.h"
#include <cmath>

double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case 's':
        return sqrt(x);
    case 'p':
        return pow(x, y);
    case '%':
        return (y / 100) * x;
    default:
        return 0.0;
    }
}
double Calculator::OperationName(string n, char oper)
{
    switch (oper)
    {
    case '+':
        return n = "����������";
    case '-':
        return n = "���������";
    case '*':
        return n = "���������";
    case 's':
        return n = "������ �����";
    case 'p':
        return n = "���������� ����� � �������";
    case '%':
        return n = "������� �� �����";
    default:
        return 0.0;
    }
}