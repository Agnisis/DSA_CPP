#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{         


    int m,a,key,temp,j;
    cout<<"Enter the size ";
    cin>>m;
    vector<int>arr;
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        arr.push_back(a);

    }
    

    for(int i=1;i<m;i++)
    {
     temp=arr[i];
     j=i-1;
     while(j>=0&&arr[j]>temp)
     {
        arr[j+1]=arr[j];
        j--;
     }
     arr[j+1]=temp;
    }

cout<<"Sorted array is "<<endl;
     for(auto c : arr)

    { 
        cout<<c<<" ";
       
        

    }

    

    return 0;
}