#include "cs50.h"
#include <stdio.h>

// i is just a variable but is easier than writting counter everytime//
// -- is for minusing 1 from the variable i everytime and declaring the result back as the value for the variable. vise verca for ++//

void meow(int n);//is enough hint that somehting yet doent exist but it will later in the code//
int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}