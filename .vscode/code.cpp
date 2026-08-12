#include <iostream>
using namespace std;
int main ()
{
cout<<"welcome to mania cleaning services"<<endl;

cout<<"how many small rooms would you like to clean?"<<endl; 
int no_of_small_rooms;
cin>>no_of_small_rooms;

cout<<"how many large rooms would you like to clean?"<<endl; 
int no_of_large_rooms;
cin>>no_of_large_rooms;

int tax=0.18;

int total_charges_of_rooms = (no_of_small_rooms*1000)+(no_of_large_rooms*1500);
int total_estimate = (total_charges_of_rooms*tax) + total_charges_of_rooms;
cout<<"Total charges of rooms: "<<total_charges_of_rooms<<endl;
cout<<"Total charges including GST: "<<total_estimate<<endl;   


}

