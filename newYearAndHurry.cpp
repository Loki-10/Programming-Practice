#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, time=240,i,r=0,c=0;
    cin >> n >> t;
    time-=t;
    for(i=1;i<=n;i++)
    {
        r+=i*5;
        if(r > time)
        {
            break;
        }
    }
    cout << i-1;
}
