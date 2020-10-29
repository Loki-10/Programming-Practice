#include<bits/stdc++.h>
using namespace std;

long long a;
int solve()
{
    cin >> a;
    cout << ( a%2 == 0 ? (a/2)-1 :(a-1)/2 ) << endl;
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
