#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
       char s[m];
       for(int i=0;i<m;i++)
       {
           cin>>s[i];
       }
        char ch=s[0];

        for(int i=1;i<m;i++)
        {
            if(s[i]>ch)
            {
                ch=s[i];
            }
        }
        printf("%d\n",ch-96);
    }
    return 0;
}

