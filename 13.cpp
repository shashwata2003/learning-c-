#include<iostream>
using namespace std;
class complex;
class calculator
{
public:
int sum(int a, int b){
    return (a+b);
}

int sumrealcomplex(complex,complex);
int sumcompcomplex(complex, complex);

};

class complex
{
private:
    int a, b;
    friend int calculator ::sumrealcomplex(complex , complex);
    friend int calculator ::sumcompcomplex(complex , complex);

public:
    void setdata(int v1, int v2 ){
        a = v1;
        b = v2;    }
        
};
int calculator ::sumrealcomplex(complex o1,complex o2){
    return (o1.a +o2.a);
}




int main(){
    complex o1,o2;
    o1.setdata(1,4);
    o2.setdata(2,3);
    calculator cal;
    int result = cal.sumrealcomplex(o1,o2);
    cout << " hence the final value is "<<result<<endl;


return 0;
}