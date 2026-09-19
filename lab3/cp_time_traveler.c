#include <stdio.h>

int main()
{
    int day, mon, yer;
    printf("Input: ");
    scanf("%i %i %i", &day, &mon, &yer);
    if (day < 32 && mon < 12 && yer >= 0 && day > 0 && mon > 0)
    {
        if (mon == 2 && day < 28)
        {
            printf("Next day: %i/%i%i\n", day + 1, mon, yer);
        }
        else if (mon == 2 && day == 29 && (yer % 4 == 0 && (yer % 100 != 0 || (yer % 100 == 0 && yer % 400 == 0))))
        {
            printf("Next day: 1/%i%i\n", mon + 1, yer);
        }
        else if (mon == 2 && day == 28 && (yer % 4 == 0 && (yer % 100 != 0 || (yer % 100 == 0 && yer % 400 == 0))))
        {
            printf("Next day: %i/%i%i\n", day + 1, mon + 1, yer);
        }
        else if (mon < 8 && mon % 2 != 0 && day < 31)
        {
            printf("Next day: %i/%i%i\n", day + 1, mon, yer);
        }
        else if (mon < 8 && mon % 2 != 0 && day == 31)
        {
            printf("Next day: %i/%i%i\n", 1, mon + 1, yer);
        }
        else if (mon < 8 && mon % 2 == 0 && day < 30)
        {
            printf("Next day: %i/%i%i\n", day + 1, mon, yer);
        }
        else if (mon < 8 && mon % 2 == 0 && day == 30)
        {
            printf("Next day: %i/%i%i\n", 1, mon + 1, yer);
        }
        else if (mon > 7 && mon % 2 == 0 && day < 31 && mon != 12)
        {
            printf("Next day: %i/%i%i\n", day + 1, mon, yer);
        }
        else if (mon > 7 && mon % 2 == 0 && day == 31 && mon != 12)
        {
            printf("Next day: %i/%i%i\n", 1, mon + 1, yer);
        }
        else if (mon > 7 && mon % 2 != 0 && day < 30 && mon != 12)
        {
            printf("Next day: %i/%i%i\n", day + 1, mon, yer);
        }
        else if (mon > 7 && mon % 2 != 0 && day == 30 && mon != 12)
        {
            printf("Next day: %i/%i%i\n", 1, mon + 1, yer);
        }
        else if (mon == 12 && day < 31)
        {
            printf("Next day: %i/%i/%i\n", day + 1, mon, yer);
        }
        else if (mon == 12 && day == 31)
        {
            printf("Next day: %i/%i/%i\n", 1, 1, yer + 1);
        }
        else
        {
            printf("Output: Invalid Date\n");
            return 1;
        }
        return 0;
    }
    else 
    {
        printf("Output: Invalid Date\n");
        return 1;
    }
}