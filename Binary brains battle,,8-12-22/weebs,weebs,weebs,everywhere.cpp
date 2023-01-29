#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=n-1;
    for(int i=2; i<n; i++)
    {
        for(int j=1; ; j++)
        {
            if(i*j<n)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }

    }
    cout<<cnt<<endl;
    return 0;
}
