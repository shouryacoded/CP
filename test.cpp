#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("clear");
    int n,q,m,sum = 0;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cin >> q;
    int cap = q;
    int sumt[q];
    while(q--)
    {   cin >> m;
        sum = 0;
        for(int k = 0; k < n; k++)
        {
            sum += abs(ar[k]-m);
        }
        sumt[q]= sum;
    }
    for(int i = 0; i < cap; i++)
    {
        cout << sumt[i] << endl;
    }
    return 0;
}