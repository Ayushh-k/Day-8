#include <bits/stdc++.h>
using namespace std;

int strLength(string s)
{
    return s.length();
}

int main()
{
    string s;
    getline(cin, s);
    int length = strLength(s);

    cout << length << endl;
}