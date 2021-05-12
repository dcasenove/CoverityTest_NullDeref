#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *invalid_ptr = NULL;
    int answer;

    *invalid_ptr = 42;
    answer = *invalid_ptr;
 
    return 0;
}

