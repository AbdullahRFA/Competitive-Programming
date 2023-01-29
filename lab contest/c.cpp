#include<iostream>
using namespace std;
int main()
{
    long long int t,i=1;
    cin>>t;
    while(t--)
    {
       long long  int a,b,c;
        cin>>a>>b>>c;
        if(((a+b >c) && (a+c>b) && (b+c>a)) && (a>0 && b>0 && c>0))
        {
           if(a==b && b==c)
        {
            cout<<"Case "<<i<<": Equilateral\n";
            i++;
        }
        else if((a==b) || (b==c) || (c==a))
        {
            cout<<"Case "<<i<<": Isosceles\n";
            i++;
        }
        else if(a!=b && b!=c && c!=a)
        {
            cout<<"Case "<<i<<": Scalene\n";
            i++;
        }
        }
        else
        {
             cout<<"Case "<<i<<": Invalid\n";
             i++;
        }

    }

    return 0;
}
