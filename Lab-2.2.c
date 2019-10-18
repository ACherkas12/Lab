#include <stdio.h>
#include <math.h>
 main()
 {
    float x,y,r,h;
    printf("Введите координаты точки - ");
    scanf("%f%f", &x,&y);
    printf("Введите радиус круга - ");
    scanf("%f", &r);
    h = sqrt(x*x + y*y);
    printf("Гипотенуза равна %.2f.", h);
    if (h > r) printf("Точка не принадлежит кругу.\n");
    else printf("Точка принадлежит кругу.\n");
 return 0;
}