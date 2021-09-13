#include<bits/stdc++.h>
using namespace std;
int solve(int n,int a,int b)
{
    string str;
    int time =0;
    cin >> str;
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i] == '0')
            time += a;
        if(str[i] == '1')
            time += b;
    }
    return time;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        cout << solve(n,a,b) << endl;

    }    
    return 0;
}