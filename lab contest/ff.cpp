#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    while(1)
    {
        int m,n,cnt=0,res=0;
        cin>>m,n;
        if(m==0 && n==0)
        {
            break;
        }
        else if(m>0 && n>=m)
        {
            for(int j=m;j<=n;j++)
            {
                 res=sqrt(j);
                if(res*res==m)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }


    return 0;
}
