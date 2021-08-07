#include<iostream>
using namespace std;

class base1
{
protected:
    int data1;
public:
    base1(int a){
        data1=a;
        cout<<"The constructor base1 is running "<<endl;
    }
    void printdata1(){
        cout<<"The value of data one is "<<data1<<endl;
    }
};

class base2
{
protected:
    int data2;
public:
    base2(int b){
        data2=b;
        cout<<"The constructor base2 is running "<<endl;
    }
    void printdata2(){
        cout<<"The value of data one is "<<data2<<endl;
    }
};

class Derived : public base1, public base2{
    protected:
    int derived1 , derived2;
    public:
    Derived(int a , int b , int c, int d):base1(a),base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"The derived constructor is running "<<endl;

    }

    void printdata3(){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};
int main(){
    Derived a(11,23,34,56);
    a.printdata1();
    a.printdata2();
    a.printdata3();
    return 0;
}