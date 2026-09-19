#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    int temp = num;
    int dgts = 0;
    while (temp != 0)
    {
        temp /= 10;
        dgts++;
    }
    printf("Digits: %i\n", dgts);
}