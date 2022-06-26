#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

string solve(int n, int x, vector<int> ar)
{
    if(is_sorted(ar.begin(),ar.end()))
        return "YES";
    
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
        int n,x;
        int temp;
        vector<int> ar;
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> temp;
            ar.emplace_back(temp);
        }
    }
    return 0;
}