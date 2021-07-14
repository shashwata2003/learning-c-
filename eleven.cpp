// ------------------------------------- Arrays ----------------------------------------------
#include<iostream>
using namespace std;
int main(){
int marks[6]={12,23,34,45,67,77};
cout<<marks[3]<<endl;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[4]<<endl;
// cout<<marks[]<<endl;
cout<<marks[5]<<endl; 
for (int i = 0; i < 6; i++)
{
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
}


return 0;
}