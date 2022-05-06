#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get numbers from user
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    // divide x by y
    float z = (float) x / (float) y;
    printf("%f\n", z);
}

// nesse programa é possível ver que não se deu o trabalho de trocar o tipo das variáveis e sim apenas a conversão na conta

// cast, typecast = conversão

// counter = counter + 1 | counter += 1 | counter++