#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string>s;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.insert(x);
    }
    for(auto it:s)
    {
        cout<<it<<endl;
    }

    return 0;
}
