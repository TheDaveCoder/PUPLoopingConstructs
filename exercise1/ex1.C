#include <stdio.h>

int main()
{
    int start, step, end;
    printf("Please input the starting number: ");
    scanf("%d", &start);
    printf("Please input the step value: ");
    scanf("%d", &step);
    printf("Please input the end value that will act as the limit: ");
    scanf("%d", &end);
    for (int i = start; i < end; i += step)
    {
        printf("%d\n", i);
    }
    return 0;
}