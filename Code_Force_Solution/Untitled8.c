#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int x,y,n,div,check;
        scanf("%lld %lld %lld",&x,&y,&n);
        div=n/x;
        check=(div*x)+y;
        if(check>n)
        {
            printf("%lld\n",((div-1)*x)+y);
        }
        else if(check==n)
        {
            printf("%lld\n",check);
        }
        else if(check<n)
        {
            printf("%lld\n",check);
        }
    }
    return 0;
}
