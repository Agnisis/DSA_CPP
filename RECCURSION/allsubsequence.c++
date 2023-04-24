#include <bits/stdc++.h>
using namespace std;
void subsequence(vector<int> arr, int size, int index, vector<int> &list)
{
    if (index == size)
    {
        for (int i = 0; i < list.size(); i++)
        {
            cout << list[i] << " ";
        }
        cout<<endl;
            if (list.size() == 0)
                cout << "{}" << endl;
            return;
        
    }
        list.push_back(arr[index]);
        subsequence(arr, size, index + 1, list);
        list.pop_back();
        subsequence(arr, size, index + 1, list);
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i]=a;
    }

    vector<int> list;
    subsequence(arr, n, 0, list);
}
