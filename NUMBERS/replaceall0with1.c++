#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,digit;
    cout<<"Enter the no ";
    cin>>num;

    string word=to_string(num);
    for(int i=0;i<word.size();i++)
    { 
        if(word[i]=='0')
        {
            word[i]='1';
        }                       
     }

        cout<<stoi(word);
}