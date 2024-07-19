#include "cs50.h"
#include <stdio.h>

int main(void) 
{
    char c = get_char("Do you agree? ");//get_char is for assigning a character and then later responding to the answer depending on criteria given below//
//to save time and codes you can use || as in or instead of making more and more else if statements//
//to use "and" statemnt in the coding world use &&//
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}