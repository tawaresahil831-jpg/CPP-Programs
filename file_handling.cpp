#include <iostream>
#include <fstream>

using namespace std ;

int main (){
ofstream fout ("example.txt");
fout<<"welcome to file handling"<<endl;
fout.close();

ifstream fin ("example.txt");
string line;
getline (fin,line);
cout<<line<<endl;
fin.close();
}