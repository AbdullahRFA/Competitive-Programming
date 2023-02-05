#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        char str[8][9], cp[65];
        int i, j, b = 0, r = 0;
        for (i = 0; i < 8; i++)
        {
            scanf("%s", str[i]);
        }
        for (i = 0; i < 8; i++)
        {
            if (strcmp(str[i], "BBBBBBBB") == 0)
            {
                printf("B\n");
                break;
            }
            else if (strcmp(str[i], "RRRRRRRR") == 0)
            {
                printf("R\n");
                break;
            }
            else
            {
                r++;
            }
        }
        if (r == 8)
        {

            char a[9], a1[9], a2[9], a3[9], a4[9], a5[9], a6[9], a7[9];
            strcpy(a, str[0]);
            strcpy(a1, str[1]);
            strcpy(a2, str[2]);
            strcpy(a3, str[3]);
            strcpy(a4, str[4]);
            strcpy(a5, str[5]);
            strcpy(a6, str[6]);
            strcpy(a7, str[7]);
            for (i = 0; i < 8; i++)
            {
                if (a[i] == a1[i] && a1[i] == a2[i] && a2[i] == a3[i] && a3[i] == a4[i] && a4[i] == a5[i] && a5[i] == a6[i] && a6[i] == a7[i]&&(a[i]>=65 &&a[i]<=90))
                {
                    printf("%c\n", a[i]);
                    break;
                }
            }
        }
    }
    return 0;
}
