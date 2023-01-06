#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string name;
    cout<<"Enter the string ";
    cin>>name;
    int counter;
    for(int i=0;i<name.size();i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'|| name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        counter++;
    }

    cout<<"No of Vowels are "<<counter;
    return 0;
}