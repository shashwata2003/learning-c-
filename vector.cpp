#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
};

int main(){
vector<int> vec1;
int size,element;

cout<<"Enter the size of the vector = ";
cin>>size;

for (int i = 0; i < size; i++)
{
    cout<<"Enter the element that is to be added to the vector = ";
    cin>>element;
    vec1.push_back(element);
}
display(vec1);
vector<int>::iterator iter = vec1.begin();
vec1.insert(iter+1,256);
display(vec1);

return 0;
}