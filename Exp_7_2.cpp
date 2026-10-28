#include<iostream>
using namespace std;

class device
{
    public:
    void smartdevice()
    {
        cout<<"this is a main device"<<endl;
    }
};

class android : public device
{
public:
void smartmobile()  
{
    cout<<"this is a android device"<<endl;
}
};

class apple_devices
{
public: 
void smartphone()
{
    cout<<"this is a ios device"<<endl;
}
};

class mobilephone : public android, public apple_devices
{
public:
void display()
{
    cout<<"this is a mobile device"<<endl;
}
};
int main ()
{
    mobilephone m;
    m.display();
    m.smartdevice();
    m.smartmobile();
    m.smartphone();   
    return 0;
}
