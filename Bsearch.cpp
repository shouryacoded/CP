#include<bits/stdc++.h>
using namespace std;
int Bsearch(int ar[], int n, int x)
{
    int start = 0, end = n - 1;
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(x == ar[mid])
        return mid;
        else if(x > ar[mid])
        start = mid + 1;
        else 
        end = mid - 1;
    }
    return -1;
}
int main()
{
    system("clear");
    int ar[] = {2,23,27,31,52,97,102,111};
    int size = sizeof(ar) / sizeof(int);
    int target = 0;
    cout << "Enter the value to be searched";
    cin >> target;
    int capture = Bsearch(ar, size, target);
    if(capture != -1)
    {
        cout << "\nThe element was found at " << capture;
    }
    else
    cout << "The element was not found";
    return 0;
}