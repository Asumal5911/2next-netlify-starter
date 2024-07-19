#include <stdio.h>
#include "cs50.h"

/*int main(void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        const int N = 3;
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (((scores[0]) + (scores[1]) + (scores[2])) / (float) N));
} */

//constant
const int N = 3;

//Prototype
float average(int length, int array[]);

int main (void)
{
    //Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    //Print average
    printf("Average: %f\n", average(N, scores));
}