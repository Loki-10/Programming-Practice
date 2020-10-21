#include<bits/stdc++.h>

using namespace std;

int main()
{
   int  num, t;
   cin >> num >> t;
   for(int i=0;i<t;i++)
   {
       if(num%10 == 0)
       {
           num/=10;
       }
       else
       {
           num-=1;
       }
   }
   cout << num;
}
