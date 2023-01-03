#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void leftRotate(vector<int>arr,int n,int k)
{
   
         

}
void rightRotate(vector<int>arr,int n,int k)
{
    vector<int>temp;
    int j=0;
    for(int i=k;i<n;i++ )
    {
    
            temp.push_back(arr[i]);
            j++;
    
    }
    for(int i=0;i<k;i++)
    {
     temp.push_back(arr[i]);
     j++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<temp[i];
    }
        
}

int main()
{   
    vector<int>arr;
    int c,x,k,n;
    string direction;
    cout<<"Enter the Size of array ";
    cin>>n;
    cout<<"Enter the value of k elements to be traversed ";
    cin>>k;
    cout<<"Enter the Direction ";
    cin>>direction;
    cout<<"Enters the elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }

    if(direction=="left")
    {
        leftRotate(arr,n,k);
    }
    else {
        rightRotate(arr,n,k);
    }






    return 0;

}