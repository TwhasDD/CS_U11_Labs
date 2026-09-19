#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%i", &num);
    int temp = num;
    int rev = 0;
    int one = 0;
    int bin = 0;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 2;
        if (temp % 2 == 1)
        {
            one++;
        }
        temp /= 2;
    }
    while (rev != 0)
    {
        bin = bin * 10 + rev % 10;
        rev /= 10;
    }
    printf("Binary representation: %i\n", bin);
    printf("Number of 1 bits: %i\n", one);
}