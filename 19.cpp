#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){
    int size,p;
    float q;
    cout<<"Enter the number of times you want run the program = "<<endl;
    cin>>size;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrtemp = ptr;
    for (int  i = 0; i < size; i++)
    {
        cout<<"Enter the price and the ID of the product "<<i+1<<" = "<<endl;
        cin>>p>>q;
        ptr ->setData(p,q);
        ptr++;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Item no. "<<i+1<<endl;
        ptrtemp ->getData();
        ptrtemp++;
    }
    

return 0;
}