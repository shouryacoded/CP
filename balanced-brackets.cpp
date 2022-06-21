#include<bits/stdc++.h>
using namespace std;

string isBalanced(string s){
    stack<char> characters;

    for(auto c: s){
        switch (c)
        {
        case '{':
        case '[':
        case '(':
        characters.push(c);
        break;
        case '}':
        if(characters.empty() || characters.top() != '{'){
            return "NO";
        }
        characters.pop();
        break;
        case ']':
        if(characters.empty() || characters.top() != '['){
            return "NO";
        }
        characters.pop();
        break;
        case ')':
        if(characters.empty() || characters.top() != '('){
            return "NO";
        }
        characters.pop();
        break;
        }
    }
    if(characters.empty())
        return "YES";
    else    
        return "NO";
}

int main()
{
    string s;
    cout << "Enter a string" << endl;
    getline(cin,s);
    string result = isBalanced(s);
    cout << endl << "The result is : " << result;
    return 0;
}