#include <iostream>
#include <math.h>

using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class simple
{
protected:
    float result;

public:
    float a, b;
    void input()
    {
        cout << "Enter the value of a = " << endl;
        cin >> a;
        cout << "Enter the value of b = " << endl;
        cin >> b;
    }
    void fuction()
    {
        char c;
        cout << "Enter the operator = " << endl;
        cin >> c;
        switch (c)
        {
        case 'a':
            result = a + b;
            cout << "The sum is =" << result << endl;
            break;
        case 'm':
            result = a - b;
            cout << "The difference is = " << result << endl;
            break;
        case 'p':
            result = a * b;
            cout << "The product is = " << result << endl;
            break;
        case 'n':
            result = a / b;
            cout << "The division is = " << result << endl;
            break;
        }
    }
};

class scientific
{
protected:
    double result1;

public:
    float d;
    void input1()
    {

        cout << "Enter the value of  = " << endl;
        cin >> d;
    }

    void function1()
    {
        char c;
        cout<<"Enter the operation = "<<endl;
        cin>>c;
        switch (c)
        {
        case 'l':
            result1 = log(d);
            cout << "Hence the value of log is = " << result1 << endl;
            break;
        case 's':
            result1 = sin(d);
            cout << " the value of sin is = " << result1 << endl;
            break;
        case 't':
            result1 = tan(d);
            cout << "The value of tan is = " << result1 << endl;
            break;
        case 'c':
            result1 = cos(d);
            cout << "The value of cas is " << result1 << endl;
            break;
        }
    }
};

int main()
{
    
    return 0;
}