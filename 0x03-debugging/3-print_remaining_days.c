#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int day_of_year = day;
    int i;

    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            for (i = 1; i < month; i++)
            {
                switch (i)
                {
                    case 2:
                        day_of_year += 28;
                        break;
                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        day_of_year += 30;
                        break;
                    default:
                        day_of_year += 31;
                        break;
                }
            }
            
            printf("Day of the year: %d\n", day_of_year);
            printf("Remaining days: %d\n", 365 - day_of_year);
        }
    }
}

