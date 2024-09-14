#include <bits/stdc++.h>
using namespace std;

int concatStr(string s1, string s2, string &s3)
{
    s3 = s1 + s2;
}

int main()
{
    string s1;
    getline(cin, s1);
    string s2, s3;
    getline(cin, s2);
    concatStr(s1, s2, s3);
    cout << s3 << endl;
}