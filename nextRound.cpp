#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n, position,c=0;
    cin >> n >> position;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i] >= a[position - 1] && a[i]>0)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}
