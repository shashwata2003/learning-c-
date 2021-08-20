#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream out;
    out.open("text21b.txt");
    out<<"HELLO SHASHWATA "<<endl;
    out<<"HELLO how are you "<<endl;;
    out<<"HELLO good S"<<endl;
    out.close();

    ofstream in;
    string st;
    in.open("text21.txt");
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st;
    }
    
return 0;
}