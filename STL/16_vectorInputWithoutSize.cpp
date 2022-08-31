#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int num = 0;
    vector<int> v;
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == ' ')
            v.push_back(num), num = 0;
        else
            num = num * 10 + (s[i] - '0');
    v.push_back(num);

    cout << v.size() << endl;
    for (auto it : v)
        cout << it << " ";

    return 0;
}