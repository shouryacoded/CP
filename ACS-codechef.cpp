#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int solve(int points)
{
    int number = (points/100) + (points%100);
    if(number > 10) return -1;
    else    return number;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int points;
        cin >> points;
        cout << solve(points) << endl;
    }
    return 0;
}