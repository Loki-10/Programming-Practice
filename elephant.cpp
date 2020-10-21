#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,a,res,c=0;
    cin >> a;
    if(a<6)
    {
        cout << 1;
    }
    else
    {
        if(a%5==0)
            {
                res=a/5;
                cout << res;
            }
        else if(a>5 && a%5!=0)
        {
            res = (a/5)+1;
            cout << res;
        }
    }
}
