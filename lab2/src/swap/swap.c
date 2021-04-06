#include "swap.h"

void Swap(char *left, char *right)
{
 char array[] = {*left , *right};
    char temp;
    temp = *left;
    *left = *right;
    *right = temp;
}
