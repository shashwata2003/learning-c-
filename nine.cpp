#include<iostream>
using namespace std;
int sum(int a , int b){
    return a+b;
};
int sum(int a , int b , int c ){
    return a*b*c;

}
int main(){
    int a , b ,c;
    cout<<"Enter the value of a "<<endl; 
    cin>>a;
    cout<<"Enter the value of b "<<endl; 
    cin>>b;
    cout<<"Enter the value of c "<<endl; 
    cin>>c;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    cout<<"THe product of a, b and c is "<<sum(a,b,c)<<endl;

return 0;
}