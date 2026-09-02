#include<iostream>
using namespace std ;

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

class mobile : public android
{
public:
void mobile_display()
{
    cout<<"this is a android mobile device"<<endl;
}
};

class tablet : public android
{
public:
void tablet_display()
{
    cout<<"this is a android tablet device"<<endl;
}
};

class apple_devices : public device
{
public:
void smartphone()
{cout<<"this is a ios device"<<endl;
}
};

class iphone : public apple_devices
{
public:
void iphone_display()
{
    cout<<"this is a iphone device "<<endl;
}
};

class ipad : public apple_devices
{
    public:
    void ipaddisplay()
    {
        cout<<"this is a ipad device"<<endl;
    }
};

int main ()
{
    mobile m;
    m.mobile_display();
    m.smartmobile();
    m.smartdevice();

    tablet t;
    t.tablet_display();
    t.smartmobile();
    t.smartdevice();

    iphone i;
    i.iphone_display();
    i.smartphone();
    i.smartdevice();

    ipad p;
    p.ipaddisplay();
    p.smartphone();
    p.smartdevice();
}