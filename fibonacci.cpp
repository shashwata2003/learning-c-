#include<iostream>
using namespace std;

int speacial(int m ){
    if(m<2){
        return 1;
    }
    return speacial(m-2)+speacial(m-1);}
int main(){
    int i ;
    for ( i = 3; i <= 20; i++)
    {
        cout<<"The Fibonacci Sequence "<<i<<" is "<<speacial(i)<<endl;
    }
    

return 0;
}