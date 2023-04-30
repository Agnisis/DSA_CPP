#include <iostream>
using namespace std;
// automorphic no is that no whoese square ends with that no itself

int main()
{

    int num;
    cout << "Enter the no" << endl;
    cin >> num;

    int sq = num * num;
    cout<<"square is "<<sq<<endl;
    int temp1 = sq;
    bool f = true;
    int temp2 = num;

    while (temp1 != 0 && temp2 != 0)
    {
        if (temp1 % 10 != temp2 % 10)
           
        {
            cout << "not same" << endl;
            f = false;
            break;
        }
        temp1 /= 10;
        temp2 /= 10;
    }
    if (f == true)
        cout << "yes its a automorphic" << endl;

    return 0;
}