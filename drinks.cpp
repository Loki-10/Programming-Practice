#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    float sum=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        sum+=a;
    }
    cout << sum/n;
}
