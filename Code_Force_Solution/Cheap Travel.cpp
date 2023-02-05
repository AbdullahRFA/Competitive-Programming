#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b*c>d)
    {
        int x=(a%b)*c;
        if(x>d)
        {
            cout<<(a/b)*d+d;
        }
        else
        {
            cout<<(a/b)*d+x;
        }
    }
    else
    {
        cout<<a*c;
    }

    return 0;

}
