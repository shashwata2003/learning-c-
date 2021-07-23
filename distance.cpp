#include<iostream>
#include<math.h>

using namespace std;

class point
{
private:
    int a , b; 
    friend int square(point o1, point o2);
public:
    void input(){
        cout<<"Enter the x coordinate "<<endl;
        cin>>a;
        cout<<"Enter the y coordinate "<<endl;
        cin>>b;
    }
};
 
int square(point o1 , point o2){
        int a=o2.a-o1.a;
        int b=o2.b-o1.b;
        double c = a*a + b*b;
        double d = sqrt(c);
        cout<<"HEnce the distance is "<<d<<endl;
}


int main(){  
    point one;
    one.input();
    point two;
    two.input();
    square(one,two);
return 0;
}