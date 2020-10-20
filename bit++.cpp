#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(s[1] == '+')
        {
            ++c;
        }
        else
        {
            --c;
        }
    }
    cout << c;
    return 0;
}
