#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* x, int* y);

int main()
{
system("chcp 1251>nul");
int* A, * B, * C;
int N, M, i, j, k, n;
printf("Ââåäèòå ðàçìåðíîñòü ïåðâîãî ìàññèâà: ");
scanf("%d", &N);
printf("Ââåäèòå ðàçìåðíîñòü âòîðîãî ìàññèâà: ");
scanf("%d", &M);
A = (int*)malloc(N * sizeof(int)); 
B = (int*)malloc(M * sizeof(int)); 
C = (int*)malloc((N + M) * sizeof(int)); 
printf("Ïåðâûé ìàññèâ:\n");
for (i = 0; i < N; i++)
{
scanf("%d", &A[i]);
C[i] = A[i]; 
k = i;
while (k > 0)
{
if (A[k] < A[k - 1])
{
swap(&A[k], &A[k - 1]);
swap(&C[k], &C[k - 1]);
k--;
}
else break;
}
}
printf("Âòîðîé ìàññèâ:\n");
for (i = 0; i < M; i++)
{
scanf("%d", &B[i]); 
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
int F = N;
for (i = 0; i < M; i++)
{
for (j = 0; j < N; j++)
{
if (B[i] < C[j])
{
for (n = N; n > j; n--)
C[n] = C[n - 1]; 
break;
}
}
C[j] = B[i]; 
N++;
}
printf("Ïåðâûé ìàññèâ: ");
for (i = 0; i < F; i++) printf("%d ", A[i]);
printf("\nÂòîðîé ìàññèâ: ");
for (i = 0; i < M; i++) printf("%d ", B[i]);
printf("\nÈòîãîâûé ìàññèâ: ");
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

