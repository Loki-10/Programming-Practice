#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a,s=0;
    cin >> n >> h;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        a>h ? s+=2 : s+=1;
    }
    cout << s;
}
