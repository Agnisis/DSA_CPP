#include<iostream>
using namespace std;
int main()
{   
    string name;
    string name1;
    cout<<"Enter the Word "<<endl;
    cin>>name;

    for(int i=name.size();i>=0;i--)
{
     name1.push_back(name[i]);
}
cout<<name1;

    return 0;
}