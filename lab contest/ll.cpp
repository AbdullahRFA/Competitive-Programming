#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int sum = 0;
int rev(int n)
{
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    while ((cin >> n))
    {
        int ara[1000000]= {0};
        for(int i=2; i<=1000000; i++)
        {
            if(ara[i]==0)
            {
                for(int j=2; i*j<=1000000; j++)
                {
                    ara[i*j]=1;
                }
            }
        }
        int check = rev(n);
        if (ara[n] == 0 && ara[check] == 0)
        {
            cout << n << " emirp." << endl;
        }
        else if (ara[n] == 0 && ara[check] == 1)
        {
            cout << n << " is prime." << endl;
        }
        else
        {
            cout << n << " is not prime." << endl;
        }
        check = 0;
    }
    return 0;
}

