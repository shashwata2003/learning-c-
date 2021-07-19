#include<iostream>
using namespace std;
class complex
{
private:
    int a , b;

public:
    void display(void){
        cout<<"Hence the complex number is = "<< a<<" + "<<b<<"i"<<endl;
    }
    complex(void){
        a=5;
        b=10;
    }
    
};



int main(){
complex c;
c.display();
return 0;
}