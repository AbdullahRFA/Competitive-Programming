#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=n-1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            count--;
        count+=n/i;
    }
    cout<<count<<endl;
    return 0;
}
