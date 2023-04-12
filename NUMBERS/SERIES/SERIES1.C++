#include<bits/stdc++.h>
using namespace std;
// 1 2 3 4 10 5 6 7 8 26 9 10 11 12 .......
int main()
{
    int n;
    cout << "enter the values of n" << endl;
    cin >> n;
    int sum1=0;
    int tempSum = 0;
    int element = 1;

    for (int i = 1; i <= n; i++)
    {

        // for every 5th term
        // grouping of 4 elements
        if (i % 5 == 0)
        {
            sum1 = sum1 + tempSum;
            tempSum = 0; 
            // update and reset temp for new cycle
        }

        // for all normal 4 terms
        else
        {
            sum1 = sum1 + element; 
            // element will be diff by i
            tempSum = tempSum + element;
            //update both total sum and temp sum
            element ++; // increase by 1
        }
    }

    cout << " final sum is " << sum1 << endl;
    
}