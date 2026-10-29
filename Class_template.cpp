#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T number1;
    T number2;

public:
    void setData(T x, T y)
    {
        number1 = x;
        number2 = y;
    }

    T getSum()
    {
        return number1 + number2;
    }

    template <class T1>
    void calculate(T a, T b)
    {
        cout << "Addition: " << number1 + number2 << endl;
        cout << "Subtraction: " << number1 - number2 << endl;
        cout << "Multiplication: " << number1 * number2 << endl;
        cout << "Division: " << number1 / number2 << endl;
    }

    int main()
    {
        Calculator<int> calc;
        calc.setData(10, 5);
        calc.calculate(10, 5);
        return 0;
    }
};
