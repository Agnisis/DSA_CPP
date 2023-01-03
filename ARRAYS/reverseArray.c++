#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int n,b,p1,p2;
    cout<<"Enter the Size "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
             cin>>b;
             a.push_back(b);
    }

    p1=0;
    p2=n-1;
    while(p1<p2)
    {
        swap(a[p1],a[p2]);
        p1++;
        p2--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}