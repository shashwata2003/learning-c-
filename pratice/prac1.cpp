//Take values of length and breadth of a rectangle from user and check if it is square or not
#include<iostream>
using namespace std;
int main(){
    int len, beat;
    cout<<"Enter the value of length "<<endl;
    cin>>len;
    cout<<"Enter the value of breath "<<endl;
    cin>>beat;
    if (len == beat )
    {
        cout<<"Hence a Square"<<endl;
    }
    else{
        cout<<"Not a square"<<endl;
    }
return 0;
}