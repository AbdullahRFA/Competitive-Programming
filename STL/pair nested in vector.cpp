#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        //v.push_back({x,y});
        v.push_back(make_pair(x,y));
    }
   // reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;
}
