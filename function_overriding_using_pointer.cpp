#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeNoise() {
        cout << "Animal Noise" << endl;
    }
};

class Dog : public Animal {
public:
    void makeNoise() override {
        cout << "Bark" << endl;
    }
};

int main() {
    Animal myAnimal;

    myAnimal.makeNoise(); 

    return 0;
}