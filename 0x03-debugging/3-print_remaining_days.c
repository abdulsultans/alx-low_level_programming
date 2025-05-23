#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account.
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    int is_leap;

    /* Leap year check: Divisible by 4 AND (not a century OR divisible by 400) */
    is_leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    if (is_leap)
    {
        if (month > 2 || (month == 2 && day == 29)) /* Adjust days after Feb */
        {
            day++;
        }
        
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 29) /* Invalid case: Feb 29 in a non-leap year */
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

