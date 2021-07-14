#include<iostream>
using namespace std;
// int ageone (int a){
//     return a-26;
// }
int main(){
    int age,c;
    cout<<"Enter the age :"<<endl;
    cin>>age;
    c=age-26;
    cout<<"Your age after reducing the service in army is = "<<c<<endl;
    if(c==18){
        cout<<"You are allowed to fill the form "<<endl;
    }
    else if ( c>34 ){
        cout<<"You are overaged to fill the form. "<<endl;
    }
    else if (c<18){
        cout<<"You are underaged to fill the  form."<<endl;
    }
    else {
        cout<<"You are allowed to fill the form. "<<endl;
    }



return 0;
}