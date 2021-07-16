#include<iostream>
using namespace std;
class shops
{
private:
    int itemid[100];
    int rownumber[100];
    int price[100];
    int counter;

public:
    void intcounter(void){
        counter;
    }

    void input(void){
        cout<<"Enter the item id of the product = "<<counter + 1<<endl;
        cin>>itemid[counter];
        cout<<"Enter the row to which it belongs = "<<endl;
        cin>>rownumber[counter];
        cout<<"Enter the price of the item = "<<endl;
        cin>>price[counter];
        counter++;
    }
    void display(void){
        for (int i = 0; i < counter; i++)
        {
         cout<<"The price of the item with the ID "<<itemid[i]<<" is "<<price[i]<<"."<<"It belongs to the row number "<<rownumber[i]<<endl;
        }
    }
};

int main(){
    shops shop_1;
    shop_1.intcounter();
    shop_1.input();
    shop_1.input();
    shop_1.display();
 
return 0;
}