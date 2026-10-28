#include<iostream>
using namespace std;

class device
{
    public:
    void smartdevice()
    {
        cout<<"this is a device "<<endl;
    }
};

class mobile : public device
{
    public:
    void display ()
    {
        cout<<"this is a mobile device"<<endl;
    }
};

int main ()
{
    mobile m;
    m.display();
    return 0;
}
