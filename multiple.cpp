#include<iostream>
using namespace std;
class base1
{
protected:
    int dataone;
public:
    void input(){
        cout<<" Enter the first data = "<<endl;
        cin>>dataone;
              }
    void display(){
        cout<<"The value of first data is = " <<dataone<<endl;
    }
};

class base2
{
protected:
    int datatwo;
public:
    void input1(){
        cout<<"Enter the value of secound data = "<<endl;
        cin>>datatwo;
    }

    void display1(){
        cout<<"The value of secound data is = "<<datatwo<<endl;
    }
};

class derived : public base1 , public base2{
    protected:
    int data3;
    public:
    void work(){
        data3=datatwo+dataone;
        cout<<"Hence the sum is = "<<data3<<endl;
    }
};

int main(){
    derived one;
    one.input();
    one.input1();
    one.display();
    one.display1();
    one.work();

return 0;
}