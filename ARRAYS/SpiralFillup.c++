
// fill a matrix of n x n  numbers from 1 to n^2 in anti clockwise manner from left top corner

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//anti clockwise spiral matrix
int main ()
{
  cout << "enter n";
  int n;
  cin >> n;
  vector < vector < int >>matrix (n, vector < int >(n, 0));
  int r = 0, c = 0, rr = 1, cc = 0;
  for (int i = 1; i <= n * n; i++)
    {
      matrix[r][c] = i;
      int tr = r + rr;
      int tc = c + cc;
      if (tc == n || tr == n || tr == -1 || matrix[tr][tc] != 0)
	{
	  swap (rr, cc);
	  rr = -rr;
	}
      r += rr;
      c += cc;
    }


  for (int i = 0; i < matrix.size (); i++)
    {
      for (int j = 0; j < matrix[0].size (); j++)
     { cout << matrix[i][j] << "  ";}
     
     cout << endl;
    }

  return 0;
}
