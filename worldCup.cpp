#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int i,j,a[n],m=9999999;
    for(i=1;i<=n;i++)
    {
        cin >> a[i];
        m = min(m, a[i]);
    }
    for(i=1;i<=n;i++)
    {
        a[i]-=m;
    }
    int lokes=0;
    for(i=(m%n)+1;i<=n;i++)
    {
        if(a[i]<=lokes)
        {
            cout << i ;
            return 0;
        }
        lokes++;
        if(i==n)
        {
            i=0;
        }
    }
}
