#include "cs50.h"
#include <stdio.h>
#include <string.h>//when using functions like strcmp to compare strings, then you also need to include the string directory for that funciton to be used//

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        //the reason there is a error and the code is not able to compare the values and run properly is becasue it is not comparing strings but rather comparing integers//
        // the "strcmp" stands for string compare which logically compares the string values rather than comparing strings to integers//
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}