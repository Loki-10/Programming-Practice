#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << "I hate it";
    }
    else
    {
        for(int i=1;i<=n-1;i++)
        {
            if(i%2==1)
                cout << "I hate that ";
            else
                cout << "I love that ";
        }
        cout << (n%2==0 ? "I love it" : "I hate it");
    }

}
