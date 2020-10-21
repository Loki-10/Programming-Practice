#include<bits/stdc++.h>

using namespace std;
char *removeDuplicate(char str[], int n)
{
   int index = 0;
   for (int i=0; i<n; i++)
    {
     int j;
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;
     if (j == i)
        str[index++] = str[i];
   }
   return str;
}

int main()
{
    char s[100];
    gets(s);
    int n = sizeof(s) / sizeof(s[0]);
    int l = strlen(removeDuplicate(s,n));
    cout << (l%2==0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}
