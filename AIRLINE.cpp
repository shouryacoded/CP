#include<bits/stdc++.h>
using namespace std;
void solve(int a,int b,int c,int d,int e)
{
    if(a+b <= d && c <= e )
        cout << "YES" << endl;
    else if(b+c <= d && a <= e)
        cout << "YES" << endl;
    else if(c+a <= d && b <= e)
        cout << "YES" << endl;
    else 
        cout << "NO"<< endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        solve(a,b,c,d,e);
    }
    return 0;
}