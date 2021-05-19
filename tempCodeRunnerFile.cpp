#include <bits/stdc++.h>
using namespace std;
int main()
{
  system("clear");
  int n  =0, t=1 ;
  cout << "Enter a number n";
  cin >> n;
  for(int i =0 ; i<n; i++)
  {
      for(int j = n; j > i;j--)
      {
          cout << " ";
      }
      for(int k = 0; k < 2*i-1;k++)
      {
          cout << t++ << " ";
      }
          cout << endl;
  }
  return 0;
}