#include <cs50.h>
#include <stdio.h>

int main(void)
{ 
    // print out that many questions marks
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}