#include<iostream>
#include <math.h>

using namespace std;

class hello
{
private:
    int x,y;
public:

    void input(void){
        cout<<"Enter the x coordinate "<<endl;
        cin>>x;
        cout<<"Enter the y coordinate "<<endl;
        cin>>y;
    }
    void work(hello o1 ,hello o2){
        int a = o1.x - o2.x;
        int b = o1.y - o2.y;
        double c = a*a + b*b;
        sqrt (c);
        cout<<"Hence the distance is " <<c<<endl; 
    }
    
};



int main(){
    hello first,secound;
    first.input();
    first.work();
    secound.input();
    secound.work();


return 0;
}