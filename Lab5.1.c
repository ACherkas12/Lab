#include <stdio.h>
#include <math.h>

int n, m, i, j, fl, sum, summ, mn=1e9, tmp;

int main() {

    scanf("%d%d", &n, &m);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++) scanf("%d", &a[i][j]);
    }

     if(n!=m)
     {
         printf("Matrica ne kvadratnaya\n");
         return 0;
     }

    int a[n+1][m+1];

    for(i=1; i<=n; i++)
    {
        sum=fl=0;
        for(j=1; j<=m; j++)
        {
            sum+=a[i][j];
            if(a[i][j]<0){fl=1; break;}
        }
        if(fl==0)
        {
            printf("Stroka %d ne soderjit otricatelnyh, summa=%d\n", sum);
        }
    }

    sum=0;

 
    for(i=2; i<=n; i++)
    {
        tmp=i;
        sum=summ=0;
        for(j=1; j<m-i+1; j++)
        {
            sum+=a[tmp][j];
            summ+=a[j][tmp];
            tmp++;
        }
        if(sum<mn) mn=sum;
        if(summ<mn) mn=summ;
        printf("%d%d\n", sum, summ);
        }

        printf("Minimum sredi diagonaley: %d", mn);
    
    return 0;
}
