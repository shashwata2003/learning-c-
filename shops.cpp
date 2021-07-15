#include <iostream>
using namespace std;
class Shops
{
private:
    int itemid[100];
    int rownumber[100];
    int itemcost[100];
    int counter;

public:
    void intcounter(void) { counter = 0; }; 
    void datainput(void);
    void display(void);
};

void Shops ::datainput(void)
{ 
    cout << "Enter the item ID of the product" <<counter+1<< endl;
    cin >> itemid[counter];
    cout << "Enter the row number in which this product belong = " << endl;
    cin >> rownumber[counter];
    cout << "Enter the item Cost of the product = " << endl;
    cin >> itemcost[counter];
};
void Shops::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with ID " << itemid[i] << " is " << itemcost[i] << "."
             << " This product should be kept in the row " << rownumber[i] << endl;
    }
};

int main()
{
Shops Shop_1 ;
Shop_1.intcounter();


    Shop_1.datainput();
    Shop_1.datainput();
    Shop_1.datainput();
    Shop_1.display();




    return 0;
}