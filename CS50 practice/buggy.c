#include <stdio.h>
#include "cs50.h"

void print_column(int height);
int main(void)
{
    int h = get_int("Height: ");
    print_column(h);
}
//instead of having to change code everytime just to  run a set of codes inside the file which is very restrictive, use print_column so only a certain part gets print and it's easier this way//

void print_column(int height)
{
    for (int i = 0; i <= height; i++)
    {
        printf("#\n");
    }
}