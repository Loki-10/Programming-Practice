#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,a;
    cin >> n;
    int arr[n];
    cin >> p;
    for(int i=0;i<p;i++)
    {
        cin >> a;
        arr[a]=1;
    }
    cin >> q;
    for(int i=0;i<q;i++)
    {
        cin >> a;
        arr[a]=1;
    }
    a=0;
    for(int i=1;i<=n;i++)
    {
        a+=arr[i];
    }
    cout << (a==n ? "I become the guy." : "Oh, my keyboard! ");
}
