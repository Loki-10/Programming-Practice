#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cost, dollar , want, total = 0;
    cin >> cost >> dollar >> want;
    for(int i=1;i<=want;i++)
    {
        total += cost*i;
    }
    cout << (total <= dollar ? 0 : total - dollar);
}
