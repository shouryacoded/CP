#include<bits/stdc++.h>

using namespace std;


vector<vector<int>> generate(int numRows){
    vector<vector<int>> result;
    for(int i = 1; i <= numRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            
        }
    }

}

int main()
{
    vector<vector<int>> output = {{1},{1,1},{1,2,1},{1,3,3,1},{1,4,6,4,1}};
    cout << "The size of the output vector is : " << output.size() << endl;
    cout << "The output for number 5 is : " << endl;
    for(int i = 0; i < output.size(); i++){
        for(int j = 0; j <= i; j++)
        {
            cout << output[i][j] << " ";
        }
    }
    int number;
    cin >> number;
    cout << "Enter a number : " << number;

    return 0;
}