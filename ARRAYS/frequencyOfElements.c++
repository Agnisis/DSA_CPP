#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int>arr;
    int counter,n,a;
    cout<<"Enter the size ";
    cin>>n;
    cout<<"Enter the Elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }

for(int i=0;i<n;i++)
{
    counter=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]==arr[j]) counter++;
    }
    cout<<arr[i]<<" occur for "<<counter <<" times"<<endl;
}

    return 0;
}