#include<stdio.h>
int main()
{
    int t,i=0;
    scanf("%d",&t);
    while(t--)
    {
        i++;
        long long int a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        if( a>0 && b>0 && c>0 &&(a+b)>c && (a+c)>b && (b+c)>a)
        {
            if(a==b && b==c)
            {
                printf("Case %d: Equilateral\n",i);
            }
            else if(a==b || b==c || c==a)
            {
                printf("Case %d: Isosceles\n",i);
            }
            else
            {
                printf("Case %d: Scalene\n",i);
            }
        }
        else
        {
            printf("Case %d: Invalid\n",i);
        }

    }
    return 0;
}
