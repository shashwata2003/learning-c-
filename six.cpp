/*  this is the program written to swap the variables in the program this is also call the program by call using refrece variable */
#include<iostream>
using namespace std;
int sum(int a , int b){
   int c=a+b;
   return c;
}
void swap(int *a , int  *b){//   temp   a     b 
    int temp =*a;           //   3     3      4
    *a=*b;                    //   3    4      4
    *b=temp;                  //  3    4      3

}
int main(){
int a=3 , b= 4;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
cout<<"the sum of a and b is "<<sum(a , b)<<endl;
swap(a , b );
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
return 0;
}