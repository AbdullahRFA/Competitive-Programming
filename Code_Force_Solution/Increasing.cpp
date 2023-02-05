#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,cnt=0,temp;

    cin>>n;
    while(n--)
    {
        cin>>x;
        long long int ara[x];
        for(int i=0; i<x; i++)
        {
            cin>>ara[i];
        }
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<x-i-1; j++)
            {
                if(ara[j]>ara[j+1])
                {
                    temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                }
            }
        }

        for(int i=0; i<x; i++)
        {
            for(int j=0; j<x-i-1; j++)
            {
                if(ara[j]==ara[j+1])
                {
                    cnt++;
                }
            }
        }
                if(cnt>0)
                {
                    cout<<"NO\n";
                }
                else
                {
                    cout<<"YES\n";
                }
                cnt=0;
            }


            return 0;
        }
