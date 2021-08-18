#include<iostream>
#include<fstream>
using namespace std;
int main(){
string st = "hello world";
string st2;
// ofstream out("text21.txt");
// out<<st;
ifstream in("text21b.txt");
in>>st2;
getline(in,st2);
cout<<st2;
return 0;
}