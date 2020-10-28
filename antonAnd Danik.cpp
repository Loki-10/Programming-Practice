#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d=0,a=0,n;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        s[i]=='A' ? a++ : d++;
    }
    cout << (a>d ? "Anton" : d>a ? "Danik" : "Friendship");
}
