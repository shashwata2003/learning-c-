#include<iostream>
using namespace std;

class jeerank
{
private:
    int a,e;
public:
    void input(void){
        cout<<"Enter your JEE percentile = "<<endl;
        cin>>a;
        cout<<"Enter the total number of student given exam in that year = "<<endl;
        cin>>e;
    }
    void work(void){
        int b = 100 - a;
        double c = (b*0.01);
        int d = (c*e);
        cout<<"Hence your rank in Jee is = "<<d<<endl;
        if (d>20000)
        {
            cout<<"Better luck next time "<<endl;
        }
        else {
            cout<<"Good work"<<endl;
        }

        

    }
};



int main(){
    int size=2;
    jeerank *ptr = new jeerank[size];
    jeerank *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        ptr ->input();
        ptr ->work();
        ptr++;
    }
    // for (int i = 0; i < size; i++)
    // {
    //     ptrtemp++; 
    // }
    

return 0;
}