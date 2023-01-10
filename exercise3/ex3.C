#include <stdio.h>

int main()
{
    double response, total;
    while (true)
    {
        printf("Enter a number: ");
        scanf("%lf", &response);
        total += response;
        if (response == 0)
            break;
    }
    printf("Sum = %.2lf", total);
    return 0;
}