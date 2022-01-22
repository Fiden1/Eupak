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
        return n = "добавление";
    case '-':
        return n = "вычитание";
    case '*':
        return n = "умножение";
    case 's':
        return n = "корень числа";
    case 'p':
        return n = "возведение числа в степень";
    case '%':
        return n = "процент от числа";
    default:
        return 0.0;
    }
}