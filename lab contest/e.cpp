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
        if(a<=20 && b<=20 && c<=20 && a>=1 && b>=1 && c>=1)
        {
            cout<<"Case "<<i<<": goog\n";
            i++;
        }
        else
        {
            cout<<"Case "<<i<<": bad\n";
            i++;
        }


    }

    return 0;
}
