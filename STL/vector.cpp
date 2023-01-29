#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many data do you want to input: ";
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

   /* for(int i=0; i<n; i++)
    {

        cout<<v[v.size()-1]<<" ";
        v.pop_back();
    }
    //cout<<v.size()<<endl;*/
    for(int value:v)
    {
        cout<<value<<" ";
    }

    return 0;
}
