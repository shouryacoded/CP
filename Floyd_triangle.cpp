#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    int changer = 0;
    int changer1 =1;
    cout << "Enter a number of rows";
    cin >>n;
    for(int i = 1; i <= n; i++)
    {
        if(i%2 == 0)
        swap(changer,changer1);
        else 
        swap(changer1,changer);
        for(int j = 1; j <= i; j++)
        {
            if(j%2==0)
            cout << changer1;
            else
            cout << changer;
        }
        cout << endl;
    }
    return 0;
}