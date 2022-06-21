#include<bits/stdc++.h>

using namespace std;

class Operations{

    public:
    int Op(int a, int b)
    {
        return a+b;
    }

    string Op(string a, string b)
    {
        return a+" "+b;
    }

    bool Op(bool a, bool b)
    {
        return a*b;
    }

    char Op(char a, int b){
        return a+(char)b;
    }
};

int main()
{
    char first;int second;
    cin >> first >> second;
    auto result  = Operations().Op(first,second) ;
    cout << "The result : " << result;
    return 0;
}