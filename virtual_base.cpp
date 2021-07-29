#include<iostream>
using namespace std;
class student 
{
protected:
    int roll_no;
public:
    void input (){
        cout<<"Enter the roll number of the student = "<<endl;
        cin>>roll_no;
    }
    void display(){
        cout<<" The roll Number of the stident is "<<roll_no<<endl;
    }
};

class studies : virtual public student{
    protected:
    float maths , physics;
    public:
    void input1(){
        cout<<"Enter the marks obtained in maths = "<<endl;
        cin>>maths;
        cout<<"Enter the marks obtained in physics = "<<endl;
        cin>>physics;
    }
    void display1(){
        cout<<"The marks obtained in maths is "<<maths<<endl
        <<"The marks obtained in physics is "<<physics<<endl;
    }
};
class sports : virtual public student{
    protected:
    float score;
    public:
    void input2(){
        cout<<"Enter the score obtained in sports = "<<endl;
        cin>>score;
        
    }
    void display1(){
        cout<<"The marks obtained in maths is "<<score<<endl;
    }
};

class result : public studies ,public sports{
    protected:
    float final;
    public:
    void last(){
        final = score + maths + physics;
        cout<<"The final score is = "<<final<<endl;
    }
};
int main(){
    result shash;
    shash.input();
    shash.input1();
    shash.input2();
    shash.display();
    shash.last();

return 0;
}