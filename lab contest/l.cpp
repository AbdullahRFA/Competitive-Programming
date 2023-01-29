#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    long long int n,t;
    cin >> n ;
        t=n;
        long long int ar[1000000] = {0}, i, j;
        for (i = 2; i <= sqrt(1000000); i++)
        {
            if (ar[i] == 0)
            {
                for (j = i * i; j <= 1000000; j = j + i)
                {
                    ar[j] = 1;
                }
            }
        }

        long long int rem,sum=0;
        while (n != 0)
        {
            rem = n % 10;
            sum = sum * 10 + rem;
            n = n / 10;
        }
        if (ar[t] == 0 && ar[sum] == 0)
        {
            cout << t << " emirp." << endl;
        }
        else if (ar[t] == 0 && ar[sum] == 1)
        {
            cout << t << " is prime." << endl;
        }
        else
        {
            cout << t << " is not prime." << endl;
        }
        sum = 0;

    return 0;
}
