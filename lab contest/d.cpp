#include<iostream>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a>=b && a<=c) || (a>=c && a<=b))
        {
            cout<<"Case "<<i<<": "<<a<<endl;
            i++;
        }
        else if((b>=a && b<=c)||(b>=c && b<=a))
        {
             cout<<"Case "<<i<<": "<<b<<endl;
            i++;
        }
        else if((c>=a && c<=b)||(c>=b&&c<=a))
        {
             cout<<"Case "<<i<<": "<<c<<endl;
            i++;
        }
    }

    return 0;
}
