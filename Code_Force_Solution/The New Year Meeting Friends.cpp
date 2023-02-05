#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[3];
    for(int i=0;i<3;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+3);
    cout<<((ara[2]-ara[1])+(ara[1]-ara[0]));
}
