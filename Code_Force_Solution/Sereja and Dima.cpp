#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,i,k=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        if(k%2==0)
        {
            if(ara[left]>ara[right])
            {
                sum1+=ara[left];
                left++;
            }
            else
            {
                sum1+=ara[right];
                right--;
            }
        }
        else
        {
             if(ara[left]>ara[right])
            {
                sum2+=ara[left];
                left++;
            }
            else
            {
                sum2+=ara[right];
                right--;
            }
        }
        k++;
    }

     cout<<sum1<<" "<<sum2;
    return 0;
}
