#include <bits/stdc++.h>
using namespace std;

class Calculator
{
    double a, b;

public:
    void input()
    {
        cout << "Enter the first number" << endl;
        cin >> a;
        cout << "Enter the second number" << endl;
        cin >> b;
    }
    double add()
    {
        return a + b;
    }
    double sub()
    {
        return a - b;
    }
    double mul()
    {
        return a * b;
    }
    double div()
    {
        if (b == 0)
        {
            cout << "Error: Division by zero" << endl;
            return INFINITY;
        }
        return a / b;
    }
};

int main()
{
    Calculator c;
    char s;
    cout << "Enter the operation" << endl;
    cin >> s;
    switch (s)
    {
    case '+':
        c.input();
        cout << "Result: " << c.add() << endl;
        break;

    case '-':
        c.input();
        cout << "Result: " << c.sub() << endl;
        break;
    case '*':
        c.input();
        cout << "Result: " << c.mul() << endl;
        break;
    case '/':
        c.input();
        cout << "Result: " << c.div() << endl;
        break;
    }
    return 0;
}
