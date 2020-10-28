#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,flag=0;
    char a;
    cin >> m >> n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a;
            if(a!='B' && a!='W' && a!='G')
            {
                flag = 1;
            }
        }
    }
    cout << (flag!=1 ? "#Black&White" : "#Color") ;
}
