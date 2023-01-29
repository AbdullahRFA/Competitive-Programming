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
   vector<pair<int,int >>:: iterator it;
   /* for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/

    /*for(it=v.begin();it!=v.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    /*  for(it=v.begin();it!=v.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
   /* for(pair<int ,int >value:v)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;*/
    for(auto value:v)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    return 0;
}

