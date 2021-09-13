    #include<bits/stdc++.h>
    using namespace std;
    void solve(int size, vector<int> arr, int x)
    {
        int counter = 0;
        int current_count = 1;
        int max_count = 0;
        int res = 0;
        for(int i=0;i<size;i++)
        {
            int temp = arr[i]^x;
            if(binary_search(arr.begin(),arr.end(),temp))
            {
                arr[i] = temp;
                counter++;
            }
        }
        sort(arr.begin(),arr.end());
        for(int i = 1;i<size;i++)
        {
            if(arr[i] == arr[i-1])
            {
                current_count++;
            }
            else{
                if(current_count > max_count){
                max_count = current_count;
                res = arr[i-1];
                }
                current_count = 1;
            }
        }
        if(current_count > max_count)
        {
            max_count = current_count;
            res = arr[size-1];
        }
        cout << max_count << " " << counter << endl;
    }
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            int size,x;
            cin >> size >> x;
            vector<int> arr(size);
            for(int i=0;i<size;i++)
            {
                cin >> arr[i];
            }
            solve(size, arr, x);
        }
        return 0;
    }