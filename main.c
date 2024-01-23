#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "apc.h"


int main()
{

char expression[1024];
Dlist_t *var1 = NULL, *var2 = NULL;
scanf("\n%[^\n]", expression);
slice(expression, &var1, &var2);
}





