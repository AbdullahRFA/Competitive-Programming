#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b&& a<=c)
        {
            cout<<a<<endl;
        }
        else   if(b>=a&& b<=c)
        {
            cout<<b<<endl;
        }
         else  if(c>=b&& c<=a)
        {
            cout<<c<<endl;
        }
          else  if(b<=a&& b>=c)
        {
            cout<<b<<endl;
        }
          else  if(a<=b&& a>=c)
        {
            cout<<a<<endl;
        }
         else  if(c<=b&& c>=a)
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
