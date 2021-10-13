#include<bits/stdc++.h>
using namespace std;
int solve(int num)
{
    if(num > 1)
        return num * solve(num-1);
    else
        return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cout << solve(num) << endl;
    }
    return 0;
}