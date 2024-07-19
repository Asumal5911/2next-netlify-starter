#include "cs50.h"
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
}
// for variable that stores a address like a colour "int *p"
//instead of see what's inside a varible and for finding what's inside "%i\n, *p"
//even as simple character as "HI!" has four bites, there the H,I,! and then also the ending variable \0

