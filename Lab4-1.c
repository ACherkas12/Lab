    #include <stdio.h>
     
    int n,i,j,fl;
     
    int main() {
     
        scanf("%d", &n);
     
        int a[n+1];

        for(i=1; i<=n; i++) 
        {
            scanf("%d",&a[i]);
        }
     
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                fl=0;
                if(i==j) continue;
                if(a[i]==a[j]) 
                {
                    fl=1;
                    break;
                }
            }
            if(fl==0) printf("%d", a[i]);
        }
     
        return 0;
    }