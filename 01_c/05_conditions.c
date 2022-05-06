// conditions and relational operators

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for x
    int x = get_int("x: ");
    
    //pronmpt user for y
    int y = get_int("y: ");
    
    // compare x and y
    if (x < y)
    {
        printf("x is less than y\n");
    }
    
    else if (x > y)
    {
        printf("x is more than y\n");
    } 
    else
    {
        printf("x is equal to y\n");
    }
}