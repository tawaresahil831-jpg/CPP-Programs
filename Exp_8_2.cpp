#include<iostream>
using namespace std;

class Number{
public:
  int num;
  Number(int n){
  num=n;
  }
   Number operator++(){
   num++;
  }
  void display(){
  cout<<"Number Increment: "<<num<<endl;
  }
};
int main(){
  Number no(6);
  ++no;
  no.display();
  return 0;
}
