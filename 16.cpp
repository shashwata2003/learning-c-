#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }
           // DESTRUCTOR 
        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {//Here we have entered a function 
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
        // now after the bracket ths fuction will be destructed automatically as we have created the destructor fuction already 
    }
    cout<<"Back to main"<<endl;

    return 0;
    // after this the n1 class fuction will be distructed as the num1 ends now 
}
