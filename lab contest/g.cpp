#include<iostream>
using namespace std;
int main()

{
    int ara[10000];
    int t=100;
    while(t--)
    {
        long long int a;
        cin>>a;
        if(a<0)
        {
            return 0;
        }
        int i=0,j,rem;
        while(a!=0)
        {
            rem=a%3;
            ara[i]=rem;
            i++;
            a=a/3;
        }
        for(j=i-1; j>=0; j--)
        {
            cout<<ara[j];
        }
        cout<<endl;
    }
    return 0;
}
