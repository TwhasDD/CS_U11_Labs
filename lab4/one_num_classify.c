#include <stdio.h>

int main()
{
    int num;
    int temp = num;
    int dgts = 0;
    int sum;
    int rev = 0;
    printf("Enter a number: ");
    scanf("%i", &num);
    while (temp != 0)
    {
        temp /= 10;
        dgts++;
    }
    printf("Digits: %i\n", dgts);
    while (num != 0)
    {
        sum += num % 10;
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Sum: %i\n", sum);
    printf("Reversed: %i\n", rev);
}