#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    while(n--)
    {
        cin>>k;
        for(int i=1; ; i++)
    {
        int d=i%10;
        if(i%3==0 || d==3)
        {
            continue;
        }
        else
        {
            k--;
            if(k==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }


    }



    return 0;
}
