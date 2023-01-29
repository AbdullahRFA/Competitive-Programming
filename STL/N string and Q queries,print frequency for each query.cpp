#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string st;
        cin>>st;
        cout<<m[st]<<endl;
    }

    return 0;
}
