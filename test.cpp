#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        int temp;
        unordered_set<int> st;
        vector<int> ar;
        for(int i = 0; i < num; i++)
        {
            cin >> temp;
            ar.emplace_back(temp);
            st.insert(temp);
        }
        if(st.size() == 1 && ar.size() > 1)
            cout << 0 << endl;
        if(st.size() == ar.size())
            cout << ar.size() - 1 << endl;
        if(st.size() != ar.size() && st.size() != 1)
            cout << ar.size() - st.size() << endl;
    }
    return 0;
}