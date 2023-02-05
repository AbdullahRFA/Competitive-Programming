#include<iostream>
using namespace std;
int main()
{
    long long int n,x,y,z,d;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        if(z%x==y)
        {
            cout<<z<<endl;
        }
        else
        {
            while(1)
            {
                d=z%x;
                if(d==y)
                {
                    cout<<z<<endl;
                    break;
                }
                else
                {
                    z--;
                }
            }

        }
    }

    return 0;
}
