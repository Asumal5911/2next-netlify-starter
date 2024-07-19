#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    double z = (double) x / (double) y;
    //float transforms the x and y into another form of codes called float free code//
    //double for double the precision for calculation numbers rounding//
    printf("%.20f\n", z);// "." # tells how many decimal points//
}