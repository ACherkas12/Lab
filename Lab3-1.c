#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double n, a, b, c;

int main(int acgc, char const *argv[])
{
    scanf("%f", &n);
    a=n;
    while (a*3>n) 
        { 
            b=1.0/n;
            n+=b;
            c++;
        }

    printf("%f", c);
return 0;
}