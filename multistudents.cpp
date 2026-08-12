#include<iostream>
using namespace std;
    
class student   
{
    private: 
    
    string name ;
    int roll_no ;
    float marks ;
    
    public:

    void input()
    {
    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter your roll no:";
    cin>>roll_no;
    cout<<"Enter your marks:";
    cin>>marks;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    };
        int main ()
    {
        student s;
        s.input();
        s.display();
        return 0;
    }
