#include <bits/stdc++.h>
using namespace std;

int countCh(string s, char t)
{
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string s;
    getline(cin, s);
    char t;
    cin >> t;
    int length = countCh(s, t);

    cout << length << endl;
}