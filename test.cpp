#include<bits/stdc++.h>
using namespace std;
int solve(int size, int a[],int b[])
{
    int target = 0;
    int step = 0;
    for(int i = 0; i < size; i++)
    {
        if(a[i] == b[i])
        target = i;
    }
    int t1 = a[target];
    int t2 = b[target];
    for(int j = 0;j < size;j++)
    {
        if(a[j]+b[j] == t1 + t2)
        step++;
        else if(a[j] == t1 && b[j] != t2)
        step++;
        else if(a[j] != t1 && b[j] != t2)
        step+=2;
        else if(a[j] != t1 && b[j] == t2)
        step++;
        else break;
    }
    return step;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
        cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
        cin >> b[i];
        }
        cout << solve(n, a, b) << endl;
    }
    return 0;
}