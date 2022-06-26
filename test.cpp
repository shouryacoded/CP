#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int solve(int size, vector<int> ar)
{
    unordered_set<int> st;
    for(int i = 0; i < size; i++){
        int temp =  ar[i];
        st.insert(temp);
    }
    cout << endl << "Size of the set : " << st.size() << endl;
    if(st.size() == 1 && ar.size() > 1)
        return 0;
    if(st.size() == ar.size()) 
        return ar.size();
    else
        return ar.size() - st.size();
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
        int size;
        int temp;
        cin >> size;
        vector<int> ar;
        for(int i = 0; i < size; i++){
            cin >> temp;
            ar.emplace_back(temp);
        }
        cout << solve(size, ar);
    }
    return 0;
}