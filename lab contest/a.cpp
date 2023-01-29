#include<iostream>
using namespace std;
int main()
{
    int t,i,j,temp;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        int a[n];
    for(i=0;i<n;i++)
   {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                cnt++;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
    }

    return 0;
}
