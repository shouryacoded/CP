#include<bits/stdc++.h>
using namespace std;
int solve(int size, vector<int> arr)
{
    int even = 0,odd = 0;
    int even_places = 0, odd_places = 0;
    int res = 0;
    for(int i = 0;i < size;i++)
    {
        if(arr[i] % 2 == 0)
            even++;
    }
    odd  = size - even;
    if(size % 2 == 0)
    {
        odd_places = size / 2;
        even_places = odd_places;
    }
    else
    {   
        odd_places = (size + 1 )/2;
        even_places = size - odd_places;
    }
    res = (max(even,odd_places) - abs(even-odd_places)) + (max(odd,even_places) - abs(odd - even_places));
    return res; 
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int size ;
        cin >> size;
        vector<int> arr(size);
        for(int i=0;i<size;i++)
        {
            cin >> arr[i];
        }
        cout << solve(size,arr) << endl; 
    }
    return 0;
}