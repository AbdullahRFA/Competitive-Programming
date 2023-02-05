#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(int i=1; i<n-1; i++)
        {
            if((ara[i-1]!=ara[i] )&& (ara[i]==ara[i+1] ))
           {
               cnt=i-1;
               break;
           }
           else if ((ara[i-1]==ara[i]) &&(ara[i]!=ara[i+1]))
            {
                cnt=i+1;
                break;
            }
               else if ((ara[i-1]!=ara[i]) &&(ara[i]!=ara[i+1]))
            {
                cnt=i;
                break;
            }

        }
        cout<<cnt+1<<endl;
        cnt=0;

    }
     return 0;
}
