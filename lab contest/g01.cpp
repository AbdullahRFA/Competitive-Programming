#include<iostream>
using namespace std;
int main()
{
    long long int n;
    while((cin>>n)&&(n>=0))
    {

        int rem,i,l=0,ar[100];
        if(n==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            while(n!=0)
            {
                rem=n%3;
                ar[l++]=rem;
                n=n/3;
            }
            for(i=l-1; i>=0; i--)
            {
                cout<<ar[i];
            }
            cout<<endl;
        }
    }

    return 0;
}
