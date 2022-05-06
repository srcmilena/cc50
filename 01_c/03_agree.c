#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("do you agree? ");
    if (c == 'y' || c == 'Y') 
    {
        printf("agreed. \n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("not agreed. \n");
    }
}

// double quotes for strings
// single quotes for char
// y = why
// || = or (logical operator)