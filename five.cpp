#include<iostream>
using namespace std;
void g(){
    cout<<"Helloo this program is written by shashwata samanta "<<endl;
}
int sum(int a , int b){
  int c=a+b;
  return c;
}
int main(){
     
    int num1 , num2;
    cout<<"Helloo this program is written by shashwata samanta "<<endl; 

cout<<"Enter the first number = "<<endl;
cin>>num1;
cout<<"Enter the secound number = "<<endl;
cin>>num2;
cout<<"Hence the sum is = "<<sum(num1 , num2 )<<endl;
g();
return 0;
}