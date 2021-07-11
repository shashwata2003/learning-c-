#include<iostream>
using namespace std;
class animals
{
private:
    char name ;
    int Serialnumber;
public:
    char type;
    char sound;

    void getdata(){
        cout<<"Name of the given animal : "<<name<<endl;
        cout<<"Serial number of the given animal is :"<<Serialnumber<<endl;
        cout<<"Type of the given animal is "<<type<<endl;
        cout<<"The sounfd that the given animal is "<<sound<<endl;
    }
};



int main(){

return 0;
}