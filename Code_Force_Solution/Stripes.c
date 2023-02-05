 #include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        char str[8][9];
        int i, j, cnt = 0, r = 0;
        for (i = 0; i < 8; i++)
        {
            scanf("%s", str[i]);
        }
        for (i = 0; i < 8; i++)
        {
            if (strcmp(str[i], "RRRRRRRR") == 0)
            {
                printf("R\n");
                break;
            }
            else
            {
                cnt++;
            }
        }
        if(cnt==8)
        {
            printf("B\n");
        }
    }
    return 0;
}
