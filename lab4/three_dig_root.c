#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    int temp = num;
    int sum = 0;
    while (1 == 1)
    {
        sum += temp % 10;
        temp /= 10;
        if (temp == 0)
        {
            printf("Intermediate sum: %i\n", sum);
            if (sum < 10)
            {
                printf("Digital root: %i\n", sum);
                break;
            }
            else
            {
                temp = sum;
                sum = 0;
            }
        }
    }
}