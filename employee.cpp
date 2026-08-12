#include<iostream>
using namespace std;

class employee 
{
    private:
    string employee_name;
    int employee_id;
    float salary;

    public:

    void input()
    {
        cout<<"Employee name:";
        cin>>employee_name;

        cout<<"Employee id:";
        cin>>employee_id;

        cout<<"Salary:";    
        cin>>salary;
    }
    void display()
    {
    
        cout<<"dyp Employee name:"<<employee_name<<endl;
        cout<<"dyp Employee id:"<<employee_id<<endl;
        cout<<"dyp Salary:"<<salary<<endl;
    }
};
    int main()
    {       
    
        employee e;
        e.input();
        cout<<"Result: "<<endl;
        e.display();
        
        
        return 0;
    }
