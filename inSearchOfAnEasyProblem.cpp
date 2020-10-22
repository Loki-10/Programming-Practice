#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,input,flag = 0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> input;
        if(input == 1)
        {
            flag = 1;
            break;
        }
    }
    cout << (flag==0 ? "Easy" : "Hard");
}
