#include<iostream>
#include<string.h>
using namespace std;

class CWH
{
protected:
    float rating;
    string title;
public:
    CWH( float r , string s){
        rating = r;
        title = s;
    }

    virtual void diaplay(){}
};

class CWHvideo : public CWH{
    float vediolen;
    public:
    CWHvideo(float r , string s , float vl):CWH(r , s ){
            vl = vediolen;
    }
    void display(){
        cout<<"The title of the vedio is "<<title<<endl;
        cout<<"The rating of the vedio is "<<rating<<endl;
        cout<<"The lengjt of the vedio is "<<vediolen<<endl;
    }
};

class CWHtext : public CWH{
    int  words;
    public:
    CWHtext(float r , string s , int wc):CWH(r , s ){
            wc = words;
    }
    void display(){
        cout<<"The title of the text is "<<title<<endl;
        cout<<"The rating of the text is "<<rating<<endl;
        cout<<"The lengjt of the text is "<<words<<endl;
    }
};
int main(){
    string title;
    float rating ,vediolen;
    int word;

    title=" Vedio one ";
    rating = 4.5;
    vediolen =17;
    CWHvideo v1(title,rating, vediolen);
    

    CWH* tut[2];
    tut[0]=

return 0;
}