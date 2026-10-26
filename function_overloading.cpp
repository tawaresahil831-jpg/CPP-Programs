#include <iostream>
using namespace std;

int area(int);
int area(int, int);
float area(double);
float area(double, double);

int main()
{

    int s, l, b;
    float r, bs, ht;

    cout << "\n enter side of square:";
    cin >> s;
    cout << "\n area of square is :" << area(s);

    cout << "\n enter length and bredth of rectangle:";
    cin >> l >> b;
    cout << "\n Area of rectangle :" << area(l, b);

    cout << "\n enter radius of circle:";
    cin >> r;
    cout << "\n Area of circle :" << area(r);

    cout << "\n enter base and height of triangle :";
    cin >> bs >> ht;
    cout << "\n Area of triangle :" << area(bs, ht);

    return 0;
}       //calculatios
int area(int s)
{
    return (s * s);
}

int area(int l, int b)
{
    return (l * b);
}
float area(double r)
{
    return (3.14 * r * r);
}

float area(double bs, double ht)
{
    return (bs * ht / 2);
}
