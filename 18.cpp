#include <iostream>
#include <math.h>

using namespace std;

class hybrid
{
protected:
    float result;

public:
    float a, b;
    char c;
    void input()
    {
        cout << "Enter the value of a = " << endl;
        cin >> a;
        cout << "Enter the value of b = " << endl;
        cin >> b;
        cout << "Enter the operator = " << endl;
        cin >> c;
    }
};

class calculator : public hybrid
{
public:
    void fuction()
    {
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
            switch (c)

            case 'l':
                result = log(a);
            cout << "Hence the value of log is = " << result << endl;
            break;
        case 's':
            result = sin(a);
            cout << " the value of sin is = " << result << endl;
            break;
        case 't':
            result = tan(a);
            cout << "The value of tan is = " << result << endl;
            break;
        case 'c':
            result = cos(a);
            cout << "The value of cas is " << result << endl;
            break;
        }
    }
};

int main()
{
    cout << "The following are the operators available: " << endl;
    cout << "To use the scientic oprators enter only the a variable and put '0' in case od b variable " << endl;
    cout << "a = add" << endl;
    cout << "p = product" << endl;
    cout << "m = minus" << endl;
    cout << "n = division" << endl;
    cout << "t = tan(a)" << endl;
    cout << "s = sin(a)" << endl;
    cout << "c = cos(a)" << endl;
    cout << "l = log(a)" << endl;

    calculator one;
    one.input();
    one.fuction();
    return 0;
}
