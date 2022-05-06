#include <cs50.h> 
#include <stdio.h> 

int main(void)
{
    int x = get_int("x: ");
    
    int y = get_int("y: ");
    
    printf("%i\n", x + y);
}

// + = plus
// if we type 20000000, it is not accepted because int only accept 32 bits (4 billions, containing negative and positive numbers)
// {} = curly braces
// () = parenthesis
// y 