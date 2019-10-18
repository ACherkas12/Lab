#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Введите стороны треугольника : ");
    scanf("%d %d %d", &a, &b, &c);
    if (c > a && c > b && (a+b) > c)
    {
    
        if (a*a + b*b == c*c) printf("Треугольник прямоугольный");
        else if (a*a + b*b < c*c) printf("Треугольник тупоугольный");
        else printf("Треугольник остроугольный");
    }
    else printf("Такого треугольника не существует");
    

return 0;
}