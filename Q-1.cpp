#include <iostream>
using namespace std;

int Addition(int a, int b)
{
    return a + b;
}

int Subtraction(int a, int b)
{
    return a - b;
}

int Multiplication(int a, int b)
{
    return a * b;
}
float Division(float a, float b)
{
    return a / b;
}
int Modular(int a, int b)
{
    return a % b;
}

int main()
{

    int Choice;
    do
    {
        cout << endl;
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for the Exit" << endl;
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            int a, b;
            cout << "Enter the first number : ";
            cin >> a;
            cout << "Enter the second number : ";
            cin >> b;
            cout << "Addition of " << a << " and " << b << " is " << Addition(a, b) << endl;
            break;

        case 2:
            int c, d;
            cout << "Enter the first number : ";
            cin >> c;
            cout << "Enter the second number : ";
            cin >> d;
            cout << "Addition of " << c << " and " << d << " is " << Subtraction(c, d) << endl;
            break;

        case 3:
            int e, f;
            cout << "Enter the first number : ";
            cin >> e;
            cout << "Enter the second number : ";
            cin >> f;
            cout << "Addition of " << e << " and " << f << " is " << Multiplication(e, f) << endl;
            break;

        case 4:
            float g, h;
            cout << "Enter the first number : ";
            cin >> g;
            cout << "Enter the second number : ";
            cin >> h;
            cout << "Addition of " << g << " and " << h << " is " << Division(g, h) << endl;
            break;

        case 5:
            int i, j;
            cout << "Enter the first number : ";
            cin >> i;
            cout << "Enter the second number : ";
            cin >> j;
            cout << "Addition of " << i << " and " << j << " is " << Modular(i, j) << endl;
            break;

        case 0:
            cout << "Exiting the program... ";
        default:
            break;
        }
    } while (Choice != 0);

    return 0;
}