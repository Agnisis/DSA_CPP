/*
1.Declare and initialize an array
2.output of array
3.search an element of array
4.insert and delete elements
5.reverse an array
6.update an element
7.
*/

#include<iostream>
using namespace std;
int main()
{  
    
    int n;
    int array1[n];

    //input of array
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
     cin>>array1[i];
    }



    //display of elements
    cout<<"The elements are :"<<endl;
    for(int i=0;i<n;i++)
    {
         cout<<array1[i];
    }
    cout<<endl;
  

   //search an element
   int x,counter=0;
   cout<<"Enter the element to be searched"<<endl;
   cin>>x;

   for(int j=0;j<n;j++)
   { 
    
    if(array1[j]==x)
    {
        cout<<array1[j]<<" found in index "<<j<<endl;
        counter++;
        break;
    }

   }
   if(counter>1)
   cout<<"Item not found"<<endl;



    

    return 0;
}