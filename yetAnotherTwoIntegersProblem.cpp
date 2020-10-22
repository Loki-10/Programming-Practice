#include<bits/stdc++.h>
using namespace std;

int solve()
{
    long long a,b,c;
    cin >> a >>b;
    c = abs(a-b);
    cout << (c+9)/10;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
