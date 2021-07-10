#include<iostream>
using namespace std;

int speacial(int m ){
    if(m<2){
        return 1;
    }
    return speacial(m-2)+speacial(m-1);

}

int factorial(int n ){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);

}
int main(){
    // int a;
    //  cout<<"Enter the value of a "<<endl;
    //  cin>>a;
    //  cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;
    //  cout<<endl;
     int b;
     cout<<"Enter the value of b "<<endl;
     cin>>b;
     cout<<"The Fibonacci number of "<<b<<" is "<<speacial(b)<<endl;

return 0;
}