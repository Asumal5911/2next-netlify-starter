#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");//int stands for integer, meaning value giving to a value in numbers/integers//

    if (x < y)
    {
        printf("x is less than y\n");
    } else if (x > y) {
        printf("x is greater than y\n");
    } else if (x == y) {
        printf("x is equivilant to y\n");
    }
}

/*
string is for senrtece
int is for numerical value
and char is for characters as in real beings
*/