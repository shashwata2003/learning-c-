#include<iostream>
#include<string.h>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;
public:
    CWH( string s , float r){
        title = s;
        rating = r;
    }

    void display(){}
};

class CWHvedio : public CWH{
    float vedlenght;
    public:
    CWHvedio( string s , float r , float vl) : CWH(s ,r ){
        vedlenght = vl;
    }
    void display(){
        cout<<"This the amazing vedio with the title = "<<title<<endl;
        cout<<"The rating of this video is =  "<<rating<<endl;
        cout<<"The lenght of the vedio is = "<<vedlenght<<endl;
    }
};

class CHWtext : public CWH{
    float words;
    public:
    CHWtext()
}

int main(){

return 0;
}