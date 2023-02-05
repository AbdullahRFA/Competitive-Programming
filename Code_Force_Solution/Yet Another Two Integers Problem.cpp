#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int d=abs(x-y);
        if(x==y)
        {
            cout<<0<<endl;
        }
        else
        {
            if(d%10==0)
            {
                cout<<d/10<<endl;
            }
            else
            {
                cout<<(d/10)+1<<endl;
            }
        }
    }

    return 0;
}
