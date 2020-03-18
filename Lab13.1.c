#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
 
int main()
{
    system("chcp 1251>nul")
    int N, M, k;
    printf("Введите размерность первого массива:");
    scanf("%d", &N);
    printf("Введите размерность второго массива:");
    scanf("%d", &M);
    A=(int*)malloc(N*sizeof(int)); //Объявляем первый массив динамически
    B=(int*)malloc(M*sizeof(int)); //Объявляем второй массив динамически
    C=(int*)malloc((N+M)*sizeof(int)) //Объявляем третий массив динамически
    printf("Первый массив:");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", A[i]); //Вводим элементы первого массива
        C[i] = A[i]; //Помещаем элементы массива A в массив С
    }
    printf("Второй массив:");
    for (int i = 0; i < M; i++)
    {
        scanf("%d", В[i]); //Вводим элементы второго массива
        C[N+i] = B[i]; //Помещаем элементы массива B в массив С
    }
    sort(C, C + N + M, greater<int>()); //Сортируем массив C по убыванию
    k = 0;
    for (int i = 0; i < N + M; i++)
    {
        if (C[i] != C[i+1])
        {
            C[k++] = C[i];
        }
    }
    printf("Массив после слияния, отсортированный по убыванию:");
    for (int i = 0; i < k; i++)
    {
    scanf("%d", C[i])
    }
    printf(\n);
    system("pause>nul");
    return 0;
}