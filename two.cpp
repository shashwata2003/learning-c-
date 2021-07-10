#include<iostream>

using namespace std;

int main(){
    int a,b,c,d,e,f;
    cout<<"Enter the marks of Maths in class 12 = "<<endl;
    cin>>a;
    cout<<"Enter the marks of Physics in class 12 = "<<endl;
    cin>>b;
    cout<<"Enter the marks of Chemistry in class 12 = "<<endl;
    cin>>c;
    cout<<"Enter the marks of Biology in class 12 = "<<endl;
    cin>>d;
    cout<<"Enter the marks of English in class 12 = "<<endl;
    cin>>e;
    cout<<"Enter the marks of PE in class 12 = "<<endl;
    cin>>f;
    int x = ((a+b+c+d+e+f)*0.4);
    cout<<"x is equal to = "<<x<<endl;
return 0;
}