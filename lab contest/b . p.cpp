#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==0 && y==1 && z==1)
        {
            cout<<"A"<<endl;
        }
        else if(x==1 && y==0 && z==0)
        {
            cout<<"A"<<endl;
        }
        else if(x==0 && y==1 && z==0)
        {
            cout<<"B"<<endl;
        }
        else if(x==1 && y==0 && z==1)
        {
            cout<<"B"<<endl;
        }
        else if(x==0 && y==0 && z==1)
        {
            cout<<"C"<<endl;
        }
        else if(x==1 && y==1 && z==0)
        {
            cout<<"C"<<endl;
        }
        else
        {
            cout<<"*"<<endl;
        }

    }
    return 0;
}
