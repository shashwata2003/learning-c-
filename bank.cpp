#include <iostream>
using namespace std;

class bankdeposite
{
private:
    int principal;
    int year;
    float interest;
    float returnvalue;

public:
    bankdeposite() {} //This function must remain empty
    bankdeposite(int p, int y, float r);
    bankdeposite(int p, int y, int R);

    void show(void);
};

bankdeposite ::bankdeposite(int p, int y, float r)
{
    principal = p;
    year = y;
    interest = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
};

bankdeposite ::bankdeposite(int p, int y, int R)
{
    principal = p;
    year = y;
    interest = float(R / 100);
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
};

void bankdeposite ::show()
{
    cout << "The pricipal amount that was deposited was " << principal << "." << endl
         << " It was deposited for " << year << " years. Hence the return value after " << year << " will be " << returnvalue << endl;
};

int main()
{
    bankdeposite c1, c2;
    int p, y, R;
    float r;
    cout << "Enter the value of p ,y and r" << endl;
    cin >> p >> y >> r;
    // cout<<"Enter the value of p ,y and R"<<endl;
    // cin>>p>>y>>R;
    c1 = bankdeposite(p, y, r);
    c1.show();

    return 0;
}