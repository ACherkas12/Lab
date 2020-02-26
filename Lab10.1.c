#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float matrix[3][4];
float matrix_def[3][4]={{0.42, -1.13, 7.05, 6.15},{1.14, -2.15, 5.11, -4.16},{-0.71, 0.81, -0.02, -0.17}};

void all_matrix(void);
void ShowMatrix(void);

int main(){
system("chcp 1251>nul");
	float tmp, xx[4];
	short int i, j, k;
	int choice;
	printf("Выберите:\n0 - индивидуальное задание;\n1 - любая система из 3 неизвестных.\n? ");
	scanf("%d", &choice);
	if (choice)
		all_matrix();
	else
		memcpy(matrix, matrix_def, size_of(matrix));
 
ShowMatrix();
  for (i=0; i<3; i++)
   {
     tmp=matrix[i][i];
       for (j=3;j>=i;j--)
           matrix[i][j]/=tmp;
         for (j=i+1;j<3;j++)
        {
           tmp=matrix[j][i];
             for (k=3;k>=i;k--)
           matrix[j][k]-=tmp*matrix[i][k];
        }
    }
    xx[2] = matrix[2][3];
   for (i=1; i>=0; i--)
     {
         xx[i] = matrix[i][3];
         for (j=i+1;j<3;j++) xx[i]-=matrix[i][j]*xx[j];
     }
printf("\nКорни уравнения по методу Гаусса:\n");
  for (i=0; i<3; i++)
    printf("x%d=%3.3f\n", i+1, xx[i]);
 system("pause>nul");
 return 0;
}
 
void ShowMatrix(void)
{
	int i,j;
		for(i=0; i<3; i++){
			for(j=0; j<3; j++)
				printf("%+3.3f*x%d",matrix[i][j],j+1);
        		printf("=%3.3f\n",matrix[i][3]);
		}
}

void all_matrix(void){
	int i, j;
	for(i=0; i<3; i++){
		printf("Введите числа для строки %d:\n", i+1);
		for(j=0; j<4; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%f", &matrix[i][j]);
		}
	}
}
				
