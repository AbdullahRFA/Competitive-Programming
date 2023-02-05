#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int rem=n%10;
        int digit=0;
        digit=(rem-1)*10;
        int sum=rem;
        int i=1;

        while(sum<=n)
        {
            digit+=(i++);
            sum=sum*10+rem;

        }
        cout<<digit<<endl;
    }

    return 0;
}
