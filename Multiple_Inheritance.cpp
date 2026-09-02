#include<iostream>
using namespace std;

class android_devices
{
public:
    void smartdevice()
    {
        cout<<"this is a android device"<<endl;
    }
};

class apple_devices
{
    public:
    void smartmobile()
    {
        cout<<"this is a ios device"<<endl;
    }
};

class mobile_devices : public android_devices, public apple_devices
{
    public:
    void display ()
    {
        cout<<"this is a mobile device"<<endl;
    }
};
int main ()
{
    mobile_devices m;
    m.display();
    m.smartdevice();
    m.smartmobile();
    return 0;
}