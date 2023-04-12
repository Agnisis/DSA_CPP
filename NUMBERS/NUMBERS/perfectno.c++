#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,digit,temp;
    int sum=0;
    temp=n;
    cout<<"Enter the no";
    cin>>n;
    while(n!=0){
digit=n%10;
sum=sum+(digit*digit);
n=n/10;
    }
    if(sum==temp)cout<<"Yes its perfect no";
    else cout<<"Its not perfect no";
    return 0;
}