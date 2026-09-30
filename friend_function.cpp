#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int value) : value(value) {}

    friend int add(const Number& first, const Number& second);
};

int add(const Number& first, const Number& second) {
    return first.value + second.value;
}

int main() {
    Number first(10);
    Number second(20);

    cout << "Sum: " << add(first, second) << endl;
    return 0;
}