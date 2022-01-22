#include <iostream>
#include "Calculator.h"
#include <cmath>

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    string d = "yes";
    string n = "";

    cout << "need to use modulo values (yes ; no)" << endl;
    cin >> d;
    cout << "what operation do you want to perform(+ ; - ; * ; / ; s (sqrt); p (pow) ; % )" << endl;
    cin >> oper;
    if (d == "yes" || d == "no")
    {
        cout << "1 Number=" << endl;
        cin >> x;
        cout << "2 Number=" << endl;
        cin >> y;
        Calculator c;
        if (oper == '/' && y == 0 || x == 0 && y == 0)
        {
            cout << "division by zero exception";
        }
        else {
            result = c.Calculate(x, oper, y);
            n = c.OperationName(string n, char oper);
            if (d == "yes")
            {
                cout << "Вы произвели операцию" << n << "." << x << oper << y << "=" << fabs(result) << endl;
            }
            else {
                { cout << "Вы произвели операцию" << n << "." << x << oper << y << "=" << result << endl; }
            }
        }
    }
    else { cout << "error: enter yes or no"; }
}