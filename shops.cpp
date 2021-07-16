#include<iostream>
using namespace std;

class shops
{
private:
    int itemid[100];
    int price[100];
    int rownumber[100];
    int counter;

public:
     void intcounter(void){
         counter=0;
     }
    void input(void){
        cout<<"Enter the Item ID of the product "<<counter + 1<<" = "<<endl;
        cin>>itemid[counter];
        cout<<"Enter the Price of the product = "<<endl;
        cin>>price[counter];
        cout<<"Enter the row number of the product = "<<endl;
        cin>>rownumber[counter];
        counter++;
    };
    void display(void){
        for (int i = 0; i < counter; i++)
        {
            cout<<"The Price of the item with the itemID "<<itemid[i]<<" is "<<price[i]<<"."<<"It belongs to the row number "<<rownumber[i]<<endl;
        }
        
    };
};



int main(){
    shops shopone;
    shopone.intcounter();
    shopone.input();
    shopone.input();
    shopone.input();
    shopone.display();


return 0;
}