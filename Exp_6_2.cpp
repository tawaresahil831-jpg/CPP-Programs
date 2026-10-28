#include<iostream>
using namespace std;

class device
{
    public:
    void operatingsystem()
    {
        cout<<"this is a smartphone device"<<endl;
    }
};

class android : public device
{
public:
    void smartdevice()
    {
        cout<<"this is a android device"<<endl;
    }
};

class samsung : public android 
{
public:
    void smartphone()
    {
        cout<<"this is a samsung device"<<endl;
    }
};

class samsung_smartphone : public samsung 
{
public:
    void camera()
    {
    cout<<"this is a samsung's smartphone device"<<endl;
    }
};

int main ()
{
samsung_smartphone s;
s.camera();
return 0;
}

