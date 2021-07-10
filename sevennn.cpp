#include<iostream>
using namespace std;

// int choose (int a , int b , int c , int d, int e , int f , int g, int h , int i, int j , int k, int l , int p, int q , int r ){
// if 
// }
//This line of code is written by shashwata samanta 

double Final(int x, int y , int z ){
    
    return ((x+y+z)*0.19660784314);
}
int main(){
    int a,b,c,d,e,f;
    
    
    cout<<"Enter the marks obtained in class 12 in Maths "<<endl;
    cin>>a;
    cout<<"Enter the marks obtained in class 12 in English"<<endl;
    cin>>b;
    cout<<"Enter the marks obtained in class 12 in Physics"<<endl;
    cin>>c;
    cout<<"Enter the marks obtained in class 12 in Chemistry"<<endl;
    cin>>d;
    cout<<"Enter the marks obtained in class 12 in PE"<<endl;
    cin>>e;
    cout<<"Enter the marks obtained in class 12 in Biology"<<endl;
    cin>>f;
    float x = ((a+b+c+d+e+f)*0.4);
    if (a,b,c,d,e,f>100) 
    {
        cout<<"Invalid Input"<<endl;
        
    }
cout<<endl;
    int g,h,i,j,k,l;
    cout<<"Enter the marks obtained in class 11 in Maths"<<endl;
    cin>>g;
    cout<<"Enter the marks obtained in class 11 in Physics"<<endl;
    cin>>h;
    cout<<"Enter the marks obtained in class 11 in English"<<endl;
    cin>>i;
    cout<<"Enter the marks obtained in class 11 in Chemistry "<<endl;
    cin>>j;
    cout<<"Enter the marks obtained in class 11 in PE"<<endl;
    cin>>k;
    cout<<"Enter the marks obtained in class 11 in Biology "<<endl;
    cin>>l;
    float y=((g+h+i+j+k+l)*0.3);
    cout<<endl;
    int p,q,r;
    cout<<"Enter the marks obtained in class 10 in First  best Subject "<<endl;
    cin>>p;
    cout<<"Enter the marks obtained in class 10 in Secound best  Subject "<<endl;
    cin>>q;
    cout<<"Enter the marks obtained in class 10 in Third best  Subject "<<endl;
    cin>>r;
    float z = ((p+q+r)*0.3);
    cout<<endl;
    cout<<endl;
    
    
    cout<<"Hence the final result in class 12 is "<<Final(x,y,z)<<endl;
    if (Final(x,y,z)<33)
    {
        cout<<"The student have failed in class 12 "<<endl;
    }
    else{
        cout<<"Congratulations The student have passed the exam "<<endl;
    }
    





return 0;
}