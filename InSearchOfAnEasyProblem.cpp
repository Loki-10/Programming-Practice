#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,flag = 0;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> b;
        if(b == 1)
        {
            flag = 1;
            break;
        }
    }
    cout << (flag==0 ? "Easy" : "Hard");
}
