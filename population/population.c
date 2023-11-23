#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int born = 0;
    int death = 0;
    while (start < end)
    {
     // start += start / 12;
        born = start/3;
        death = start/4;
        start = start + born - death;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
