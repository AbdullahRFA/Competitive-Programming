#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int n,sum1=0,sum2=0;
        cin>>n;
        if(n%2==0)
        {
            if(n%4==0)
            {
                cout<<"YES"<<endl;
                v.push_back(2);
                for(int i=1;i<=n;i++)
                {
                    if(i%2==0)
                    {
                        v.push_back(i);
                    }
                }
                 for(int i=1;i<=n;i++)
                {
                    if(i%2!=0)
                    {
                        v.push_back(i);
                        sum2+=i;
                    }
                }
                for(int i=1;i<v.size()/2;i++)
                {

                    sum1+=v[i];
                }
                int c=sum2-sum1;
                int d=v.back();
                v.back()=d+c;
                  for(int i=1;i<v.size();i++)
                {

                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
