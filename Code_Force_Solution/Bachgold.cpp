#include<iostream>
using namespace std;
int main()
{
    int n,answer;
    cin>>n;
    if(n%2==0)
    {
        answer=n/2;
        cout<<answer<<endl;
        for(int i=0;i<answer;i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else if(n==3)
    {
        cout<<1<<endl;
        cout<<3<<endl;
    }
    else
    {
        n=n-3;
        answer=n/2;
        cout<<answer+1<<endl;
        for(int j=0;j<answer;j++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }

    return 0;
}
