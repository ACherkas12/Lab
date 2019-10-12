#include <stdio.h>
void main()
{
	int n;
	{ 
	printf("¬ведите пору года");
	scanf("%d", &n);
	if(n==1) printf("ƒекабрь, €нварь, февраль");
		else if(n==2) printf("ћарт, апрель, май");
			else if(n==3) printf("»юнь, июль, август");
				else printf("—ент€брь, окт€брь, но€брь");
	}
return 0;				
}
