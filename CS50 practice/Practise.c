/*Lecture 1 - C
In the process of humans typing codes and machine following orders and delivering the answer. It can be see in and as a box. Codes go in inside a box (the literal machine that processes the work) which is called compiler, it is a program that translates any program to another. Due to the conversion the computer is able to understand the code and perform actions specified to the code. */
#include <cs50.h>
#include <stdio.h> // not studio//


int main(){
    printf("Hello World");//double backslash if needed to show literal element//
    return 0;

}
//Library is a code that has been written by someone else//
/*
get_string -- for text
get_int -- for integer/number
*/

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}