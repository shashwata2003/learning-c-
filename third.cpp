#include<iostream>
using namespace std;
int main(){
 int a = 3;
 int *b=&a;
 int **c=&b;
 cout<<"The address of a is "<<b<<endl;
 cout<<"The address of a is "<<&a<<endl;
 cout<<"The address of b is "<<c<<endl;
 cout<<"The address of b is "<<&b<<endl;
 cout<<"Dereancing b"<<*b<<endl;
 cout<<"Dereancing c"<<*c<<endl;
 cout<<"Dereancing b"<<**c<<endl;
 
return 0;
}