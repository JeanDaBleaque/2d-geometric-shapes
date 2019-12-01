#include <stdio.h>

int main()
{
    char operator;
    int w, h, i, k, t, l, s1, s2;
    t = 1;
    printf("Which operator do you want to use? ");
    scanf("%c", &operator);
    switch (operator)
    {
    case 'S':
    case 's':
            printf("Enter the size of square: ");
            scanf("%d", &h);
            w = h;
            for (i=0;i<h;i++)
            {
                for (k=0;k<w;k++)
                {
                    printf("* ");
                }
            printf("\n");
            }
            break;
    case 'T':
    case 't':
            printf("Enter the height: ");
            scanf("%d", &h);
            s2 = h;
            for (i=0;i<h;i++)
            {

                for (s1=0;s1<s2;s1++)
                {
                    printf(" ");
                }
                    for (l=0;l<t;l++)
                    {
                        printf("* ");
                    }
            t++;
            s2=s2-1;
            printf("\n");
            }
            break;
    case 'R':
    case 'r':
            printf("Enter the height: ");
            scanf("%d", &h);
            printf("Enter the width: ");
            scanf("%d", &w);
            for (i=0;i<h;i++)
            {
                for (k=0;k<w;k++)
                {
                    printf("* ");
                }
            printf("\n");
            }
            break;
    default:
            printf("You entered invalid operator!\n");
    }
    return 0;
}
