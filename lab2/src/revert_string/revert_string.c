#include <string.h>
#include <stdlib.h>
#include "revert_string.h"

void RevertString(char *str)
{
    char *tmp;
    tmp = (char*)malloc(sizeof(strlen(str)));
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--){
        *tmp = str[i];
        str[i] = str[j];
        str[j] = *tmp;
    }
}