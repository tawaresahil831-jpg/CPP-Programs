#include <iostream>
using namespace std;

class Box;

class AreaCalculator {
public:
    double calculate(const Box& b);
};

class Box {
private:
    double length;
    double width;

public:
    Box(double l, double w) : length(l), width(w) {}

    friend class AreaCalculator;
};
double AreaCalculator::calculate(const Box& b) {
    
    return b.length * b.width;
}

int main() {
    Box box(5.0, 3.0);
    AreaCalculator calc;

    cout << "Area of the box: " << calc.calculate(box) << endl;
    return 0;
}
