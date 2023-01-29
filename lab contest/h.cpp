#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ch[81];
        int ar[85], n, i, j, k = 0, m = 0, sum = 0;
        cin >> ch;
        for (i = 0; ch[i] != '\0'; i++)
        {
            if (ch[i] == 'O')
            {
                k++;
                if (k > 0)
                {
                    ar[m] = k;
                    m++;
                }
                else
                {
                    k = 0;
                }
            }
            else if (ch[i] == 'X')
            {
                k = 0;
            }
        }
        for (i = 0; i < m; i++)
        {
            sum = sum + ar[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
