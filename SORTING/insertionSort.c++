#include<iostream>
using namespace std;
int main()
{         


    int m,a,key;
    cout<<"Enter the size ";
    cin>>m;
    vector<int>arr;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        arr.push_back(a);

    }
    cout<<"Enter the element to be searched ";
    cin>>key;

    

    return 0;
}