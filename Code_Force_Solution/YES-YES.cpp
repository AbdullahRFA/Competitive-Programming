#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        for(int i=1;i<s.size();i++)
        {
             if(s[i-1]=='o')
            {
                cout<<"NO"<<endl;
            }

         else   if((s[i-1]=='e'&&s[i]=='s'&&s[i+1]=='Y'))
            {
                cout<<"YES"<<endl;
                break;
            }

           else  if((s[i-1]=='Y'&&s[i]=='e'&&s[i+1]=='s'&&s[i+2]=='s'))
            {
                cout<<"NO"<<endl;//||(s[i]=='Y'&&s[i]=='e'&&s[i]=='s')
                break;
            }
             else  if((s[i-1]=='Y'&&s[i]=='e'&&s[i+1]=='s'))
            {
                cout<<"YES"<<endl;//||(s[i]=='Y'&&s[i]=='e'&&s[i]=='s')
                break;
            }
           else  if((s[i-1]=='e' || s[i]=='s'))
            {
                cout<<"YES"<<endl;
                break;
            }
             else if((s[i-1]=='s'&&s[i]=='Y'))
            {
                cout<<"YES"<<endl;
                break;
            }

            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }

    return 0;
}
