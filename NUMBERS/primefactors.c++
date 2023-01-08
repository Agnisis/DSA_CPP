#include<iostream>
using namespace std;
int main()
{  


    int num;
    cout<<"Enter the number ";
    cin>>num;
    for(int i=2;num>1;i++)
    {
        if(num%i==0)
        {
    while(num%i==0)
    {
        cout<<" "<<i<<" ";
        num=num/i;
    }
        }
    }
    return 0;
}