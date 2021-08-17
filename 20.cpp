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
        cout<<"This is amazing vedio with the title = "<<title<<endl;
        cout<<"The rating of this video is =  "<<rating<<endl;
        cout<<"The lenght of the vedio is = "<<vedlenght<<endl;
    }
};

class CHWtext : public CWH{
    int  words;
    public:
    CHWtext(string s, float r ,int wc ) : CWH(s , r){
        words = wc;
    }
    void display(){
        cout<<"This is a amazing text tutorial with the title = "<<title<<endl;
        cout<<"The rating of the text tutorial is "<<rating<<endl;
        cout<<"The number of words in this text is "<<words<<endl;
    }
}; 

int main(){
    string title;
    float rating,vedlenght;
    int words;

    title = "vedio one";
    rating=4.9;
    vedlenght=16.56;
    CWHvedio one(title,rating,vedlenght);
    one.display();

    title="Vedio one notes";
    rating=4.3;
    words=450;
    CHWtext two(title,rating,words);
    two.display();

    // CWH*tut[2];
    // tut[0]=&one;
    // tut[1]=&two;

    // tut[0]->display();
    // tut[1]->display(); 
return 0;
}