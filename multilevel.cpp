#include<iostream>
using namespace std;

class student
{
protected:
    int rollno;
public:
    void input();
    void display(void);
};

void student :: input(){
    
    cout<< " Enter the roll number of the student "<<endl;
    cin>>rollno;
}

void student :: display(void){
    cout<< " The roll number of the student is "<<rollno<<endl;

}

class marks : public student{
    protected:
    float maths;
    float physics;
    float biology;
    float chemistry;

    public:
    void input1();
    void display1(void);

};

void marks :: input1(){
    
    cout<<"Enter the marks obtained in maths = "<<endl;
    cin>>maths; 
    cout<<"Enter the marks obtained in physics = "<<endl;
    cin>>physics;
    cout<<"Enter the marks obtained in biology = "<<endl;
    cin>>biology;
    cout<<"Enter the marks obtained in chemistry = "<<endl;
    cin>>chemistry;
    
}
void marks :: display1(){
    cout<<"The marks obtained in maths = "<<maths<<endl;
    cout<<"The marks obtained in physics = "<<physics<<endl;
    cout<<"The marks obtained in biology = "<<biology<<endl;
    cout<<"The marks obtained in chemistry = "<<chemistry<<endl;
}

class result : public marks{
    
    public:
    void process(void);
   
};

void result :: process(){
    float percentage=(maths+physics+biology+chemistry)*0.25;
    display();
    cout<<"Hence the percentage obtained is "<<percentage<<"%"<<endl;
}
int main(){
    result shashwata;
    shashwata.input();
    shashwata.display();
    shashwata.input1();
    shashwata.display1();
    shashwata.process();

return 0;
}