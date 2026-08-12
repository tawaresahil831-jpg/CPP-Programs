#include <vector>
#include <iostream>
using namespace std;

class Complex
{
public:

int real;
int imaginary;
Complex()
{
    real=0;
    imaginary=0;
}

Complex(int r, int i)
{
    real=r;
    imaginary=i;
}
Complex addcomplexnumbers(Complex C1, Complex C2)
{
    Complex res;
    res.real = C1.real + C2.real;
    res.imaginary = C1.imaginary + C2.imaginary;
    return res;
}
};

int main()
{   Complex C1(4,5); 
    cout<<"complex number 1:"<<C1.real<<"+"<<C1.imaginary<<"i"<<endl;

    Complex C2(7,8);
    cout<<"complex number 2:"<<C2.real<<"+"<<C2.imaginary<<"i"<<endl;

    Complex C3;

C3 = C3.addcomplexnumbers(C1,C2);
cout<<"sum of complex number:"<<C3.real<<"+"<< C3.imaginary<<"i"<<endl;

Complex A(2,7);
cout<<"complex number 1:"<<A.real<<"+"<<A.imaginary<<"i"<<endl;

Complex B(3,4);
cout<<"complex number 2:"<<B.real<<"+"<<B.imaginary<<"i"<<endl;

Complex C;

C = C.addcomplexnumbers(A,B);
cout<<"sum of complex number:"<<C.real<<"+"<< C.imaginary<<"i"<<endl;
}