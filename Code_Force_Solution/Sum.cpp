#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        if(x==(y+z)||y==(z+x)||z==(x+y))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
