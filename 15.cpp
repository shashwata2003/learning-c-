#include<iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
public:
    void setdata(void){
        
        cout<<"Enter the value of a "<<endl;
        cin>>a;
        cout<<"Enter the value of b "<<endl;
        cin>>b;
    }
    void setdatabysum(complex o1, complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void display(void){
        cout<<"Hence the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    void displayfinal(void){
        cout<<"Hence the sum of the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    
};



int main(){
    complex c1,c2,c3;
    c1.setdata();
    c1.display();
    c2.setdata();
    c2.display();
    
    c3.setdatabysum(c1,c2);
    c3.displayfinal();

return 0;
}