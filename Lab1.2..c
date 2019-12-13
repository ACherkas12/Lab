#include <math.h>
#include <stdio.h>


int main()
{
float x, y, z, a, b, s;//
x=-15.246;
y=4.642 * pow(10,-2);
z=21;

a=log(pow(y,-sqrt(fabs(x))))*(x-(y/2));
b=0.5 - 0.5*cos(2*atan(z));
s=a+b;

printf("%f", s);
return 0;

}
