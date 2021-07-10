#include<iostream>
using namespace std;
struct names
{
 int roll ;
 char section;
 float marks ; 
};

int main(){
struct names shashwata; 
{
    shashwata.roll= 30 ;
    shashwata.marks=100;
    shashwata.section= 'e';
};

cout<<"The roll no of shashwata samanta is "<<shashwata.roll<<endl;
cout<<"The roll no of shashwata samanta is "<<shashwata.marks<<endl;
cout<<"The roll no of shashwata samanta is "<<shashwata.section<<endl;

return 0;
}