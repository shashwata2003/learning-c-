#include<iostream>
using namespace std;

class student
{
private:
    int admitnumber;
public:
    int rollnumber;
    void setdata(int admitnumber);
    void getdata(){
        cout<<"The Admit number of the student is = "<<admitnumber<<endl;
        cout<<"The Roll number of the student is = "<<rollnumber<<endl;
    }
};
void student ::setdata(int admitnumber){
    admitnumber=admitnumber;
}


int main(){
    
    student shashwata;
    shashwata.rollnumber=30;
    shashwata.setdata(10484);
    shashwata.getdata(); 

return 0;
}