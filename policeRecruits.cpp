#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,s=0,c=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> p;
        if(p ==-1)
        {
            if(s)
            {
                s--;
            }
            else
            {
                c++;
            }
        }
        else
        {
            s+=p;
        }
    }
    cout << c;
}
