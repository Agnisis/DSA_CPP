#include<iostream>
using namespace std;
int main()
{ 

    string word;
    string word1;
    char ch;
    cout<<"Enter the Word"<<endl;
    cin>>word;
    for(int i=0;i<word.size();i++)
    {
        for(int j=i;j<word.size();j++)
        {
            if(word[i]!=word[j] && i!=j)
            {  
                ch=word[i];
                word1.push_back(ch);
            }
        }
    }

    cout<<word1<<endl;
    return 0;
}