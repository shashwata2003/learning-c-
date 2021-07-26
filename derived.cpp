#include <iostream>
using namespace std;
class base
{
private:
    int data1;

public:
    int data2;
    void getdata();
    int setdata1();
    int setdata2();
};

void base ::getdata(void)
{
    data1 = 10;
    data2 = 20;
};

int base ::setdata1()
{
    return data1;
};

int base ::setdata2()
{
    return data2;
};

class derived : public base{
   int data3;
   public:
   int process();
   void diaplay();
};

int derived :: process(){
  data3 = setdata1() * data2;
};

void derived :: diaplay(){
    cout<<"The value of data1 = "<<setdata1()<<endl;
    cout<<"The value of data2 = "<<data2<<endl;
    cout<<"The value of data3 = "<<data3<<endl;
}

int main()
{
 derived one;
 one.getdata();
 one.process();
 one.diaplay();

    return 0;
}