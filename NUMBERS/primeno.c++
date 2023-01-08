#include<iostream>
using namespace std;
int main()
{
    int num,c=0;
    cout<<"Enter the no ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {

    
    if(num%i==0)
    {
          c++;
    }
    }
    if(c<=2)
    {
        cout<<"its prime no"<<endl;

    }
    else 
    cout<<"not a prime no ";

}