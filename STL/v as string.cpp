#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
   // cout<<"Enter how many data do you want to input: ";
    cin>>m>>n;
    vector<string>v;
    for(int i=0; i<n; i++)
    {
        string x;
        cin>>x;
        v.push_back(x);
    }

   // for(int i=0; i<n; i++)
    //{

        //cout<<v[i]<<" ";
        //v.pop_back();
   // }
   // cout<<v.size()<<endl;
   sort(v.begin(),v.end());
   //cout<<"after sorting"<<endl;
   for(int i=0; i<n; i++)
    {

        cout<<v[i]<<endl;
        //v.pop_back();
    }

    return 0;
}

