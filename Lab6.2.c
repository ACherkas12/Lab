#include <stdio.h>
#include <math.h>

int n, m, i, j, fl,ans;

int main(){
	printf("Stroki: ");
	scanf("%d",&n);
	printf("Stolbcy: ");
	scanf("%d",&m);
	int a[n+1][m+1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=1;i<=m;i++){
		fl=0;
		for(j=1;j<=n;j++){
			if(a[i][j]==0){
				fl=1;
				break;
			}
		}
		if(fl==0) ans++;
	}
	printf("%d", ans);

	return 0;
}
