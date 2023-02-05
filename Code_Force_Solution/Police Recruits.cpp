#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int police=0,crime=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)
        {
            police+=x;
        }
        else
        {
            if(police<1)
            {
                crime++;
            }
            else
            {
                --police;
            }
        }
    }
    cout<<crime;

    return 0;
}
