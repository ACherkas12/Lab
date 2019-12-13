#include <stdio.h>
int main(int argc, char const *argv[])
{
   
    int n;
    printf("1=зима, 2=весна, 3=лето, 4=осень\n");
    printf("Введите пору года-");//
    scanf("%d", &n);
    if(n==1) printf("Декабрь, январь, февраль");//
        else if(n==2) printf("Март, апрель, май");
            else if(n==3) printf("Июнь, июль, август");
                else if(n==4) printf("Сентябрь, октябрь, ноябрь");
                    else if (n>4) printf("Ошибка");
return 0;                
}
