#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int>arr;
    int n,x,sum=0;
    cout<<"Enter the size of array ";
    cin>>n;
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<n;i++)
    {
cin>>x;
arr.push_back(x);
sum=sum+arr[i];
    }

    cout<<"Sum of the array is "<<sum<<endl;


    return 0;
}