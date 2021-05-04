#include <stdio.h>

int main()
{
    int count = 0;
    printf("Count: ");
    scanf("%i", &count);

        for (int i = 0; i < count; i++)
        {
            printf("*");
            for (int x = 0; x < i; x++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        for (int i = count; i > 0; i--)
        {
            printf("*");
            for (int x = 0; x < i; x++)
            {
                printf(" ");
            }
            printf("*\n");
        }

    scanf("%i",count);

    return 0;
}