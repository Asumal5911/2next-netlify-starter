 #include <stdio.h>
 #include "cs50.h"

 /* cc hello.c -o hello cs50.c
    ./hello
    whatever the code is 
    mv (old file name.c) (new file name.c) to change c file's name
    ls to see all files, then rm (file name) will remvoe the file name
    */

int main(void)
{
    string answer = get_string("What's your name? ");

    printf("hello, %s\n", answer);
}

int counter = counter ++;//adding one to the value of counter, and then also assigning the new value back to counter//
                        // vice versa for -- as well//
/*
if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else if (x == y)// double equal sign so it's not mistaken as assignemnt of an variable//
{
    printf("x is equal to y\n");
}

and you can save time by only asking two questions instead of three by deleting second else if and keeping it as else of the second arguement

if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else 
{
    printf("x is equal to y\n");
}
*/