#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> v,int n,int key)
{
    int start=0;
    int end=n-1;
    sort(v.begin(),v.end());
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(v[mid]==key)
          return mid;    
        if(key>v[mid])
            start=mid+1;
        else
         end=mid-1;

        mid=(start+end)/2;
    }
    return -1;
}
int main()
{     
    int n,a,key;
    vector<int>v;
    cout<<"Enter the size ";
    cin>>n;

    cout<<"Enter the elements ";
    for(int i=0;i<n;i++)
    {
          cin>>a;
           v.push_back(a);
    }

    cout<<"Enter the element to be searched ";
    cin>>key;
    int index=binarysearch(v,n,key);
    cout<<"Value found at "<<index;

    return 0;
}