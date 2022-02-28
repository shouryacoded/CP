#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int left = 0, right = height.size()-1;
        int curr_area =0, max_area = 0;
        while(right-left > 1)
        {
            int len = right - left;
            curr_area = min(height[left],height[right]) * len;
            if(curr_area >= max_area)
            {
                max_area = curr_area;
            }
            if(height[left] < height[right])
                left++;
            else if (height[left] > height[right])
                right--;
            else 
            {
                left++; right--;
            }
        }
        return max_area;
}

int main()
{
    vector<int> a;
    for(int i = 0; i < 2;i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    int res = maxArea(a);
    cout << res;
    return 0;
}

