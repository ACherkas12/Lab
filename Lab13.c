#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* x, int* y);

int main()
{
system("chcp 1251>nul");
int* A, * B, * C;
int N, M, i, j, k, n;
printf("¬ведите размерность первого массива: ");
scanf("%d", &N);
printf("¬ведите размерность второго массива: ");
scanf("%d", &M);
A = (int*)malloc(N * sizeof(int)); //ќбъ€вл€ем первый массив динамически
B = (int*)malloc(M * sizeof(int)); //ќбъ€вл€ем второй массив динамически
C = (int*)malloc((N + M) * sizeof(int)); //ќбъ€вл€ем третий массив динамически
printf("ѕервый массив:\n");
for (i = 0; i < N; i++)
{
scanf("%d", &A[i]); //¬водим элементы первого массива
C[i] = A[i]; //сохран€ем элементы первого массива в итоговый
k = i;
while (k > 0)
{
if (A[k] < A[k - 1])
{
swap(&A[k], &A[k - 1]); //сразу вставл€ем элемент в нужное место массива
swap(&C[k], &C[k - 1]);
k--;
}
else break;
}
}
printf("¬торой массив:\n");
for (i = 0; i < M; i++)
{
scanf("%d", &B[i]); //¬водим элементы второго массива
k = i;
while (k > 0)
{
if (B[k] > B[k - 1])
{
swap(&B[k], &B[k - 1]);
k--;
}
else break;
}
}
int F = N; //сохран€ем размер первого массива
for (i = 0; i < M; i++)
{
for (j = 0; j < N; j++)
{
if (B[i] < C[j])
{
for (n = N; n > j; n--)
C[n] = C[n - 1]; //сдвигаем все элеметы вправо, чтобы по€вилось место дл€ вставки элемента
break;
}
}
C[j] = B[i]; //вставл€ем элемент второго массива в нужное место
N++; //количество элементов итогового массива
}
printf("ѕервый массив: ");
for (i = 0; i < F; i++) printf("%d ", A[i]);
printf("\n¬торой массив: ");
for (i = 0; i < M; i++) printf("%d ", B[i]);
printf("\n»тоговый массив: ");
for (i = 0; i < F + M; i++) printf("%d ", C[i]);
free(A);
free(B);
free(C);
system("pause>nul");
return 0;
}

void swap(int* x, int* y)
{
int tmp;
tmp = *x;
*x = *y;
*y = tmp;
}

