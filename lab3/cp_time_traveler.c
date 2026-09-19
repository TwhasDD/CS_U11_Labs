#include <stdio.h>

int main()
{
    int day, mon, yer;
    printf("Input: ");
    scanf("%i %i %i", &day, &mon, &yer);
    if (day < 32 && mon < 12 && yer >= 0)
    {
        if (mon == 2 && day < 28)
        {

        }
        if (mon == 2)
    }
    else 
    {
        printf("Output: Invalid Date\n");
        return 1;
    }
}