#include<iostream>
using namespace std;
class name
{
private:
    int a, b, c;
public:
   int d,e;
   //set data can be used both ferom inside the class function and outside of the class function 
   //USING SET DATA FROM INSIDE 
   void setdata(int a1, int b1, int c1);
   void getdata(){
       cout<<"The value of a is = "<<a<<endl;
       cout<<"The value of b is = "<<b <<endl;
       cout<<"The value of c is = "<< c<<endl;
       cout<<"The value of d is = "<< d<<endl;
       cout<<"The value of e is = "<<e <<endl;
   }
};
// USING SETDATA FROM OUTSIDE TO CHANGE THE NAME OF THE VARIABLES 
void name ::setdata(int a1 , int b1 , int c1){
    a = a1;
    b = b1;
    c = c1;
}



int main(){
    name Shashwata;
    //The value of d and e can be change directly as they are public 
    Shashwata.d=12;
    Shashwata.e=13;
    // whereas the a, band c are private variables hence they can only be changed using the setdata function 
    Shashwata.setdata(14,15,16);
    Shashwata.getdata();

return 0;
}