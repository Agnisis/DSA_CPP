#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int data[10];
    int temp;
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>data[i];
    }

     cout<<"unsorted array is "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<data[i]<<" ";
    }

    cout<<endl;

    for(int i=1;i<10;i++)
    {
        for(int j=0;j<10-i;j++)
        {
            if(data[j]>data[j+1])
            {
                  temp=data[j];
                  data[j]=data[j+1];
                  data[j+1]=temp;
            }
        }
    }


    cout<<"sorted array is "<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}