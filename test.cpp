#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("clear");
    int n, sum = 0;
    int holder = 1;
    cout << "Enter a number n ";
    cin >>n;
    for(int i = 0; i < n; i++)
    {
        cout << holder;
        if(i<n)
        {
            cout << "+";
        }
        sum += holder;
        holder = (holder*10)+1;
    }
    cout<< "\n" << sum;
    return 0;
}