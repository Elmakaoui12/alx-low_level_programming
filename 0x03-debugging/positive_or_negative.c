#include "main.h"
/**
 *positive_or_negative - checks for positive or negative numbers 
 *
 * @i: the number to be checked
 * 
 * return: always.
 */
void positive_or_negative(int i)
{
        if (i < 0)
                printf("%d in negative\n", i);
        else
                printf("%d is positive\n", i);
}
