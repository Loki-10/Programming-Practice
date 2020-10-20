#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d,arr[9],sum;
    cin >> n;
    while(1)
    {
        n++;
        a = n%10;
        b = (n%100)/10;
        c = (n%1000)/100;
        d = n/1000;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout << n;
            break;
        }
    }
    return 0;
}
