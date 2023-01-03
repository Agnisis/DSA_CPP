#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{    
   int n,a;
   cout<<"Enter an array size"<<endl;
   cin>>n;
   cout<<"Enter the array"<<endl;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
          cin>>a;
          v.push_back(a);
   }

   for(int i=0;i<n;i++)
   {
    cout<<v[i]<<" ";
   }
cout<<endl;

sort(v.begin(),v.end());
cout<<"1st smallest element is "<<v[0]<<endl;
cout<<"2nd smallest element is "<<v[1]<<endl;

    return 0;
}