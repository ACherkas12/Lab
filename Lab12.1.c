#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int MakeHashFunc(int key, int i){
  return key*(i+25)+13;
}

int main(){
  system("chcp 1251>nul");
  int n;
    printf("Введите размер массива:");
    scanf("%d", n);
    srand(time(NULL));
    int a[n], i, b[n], max=0;
      for(i=0;i<n;i++){
        a[i]=rand()%100;
        printf("key(%d)", a[i]);
        b[i]=MakeHashFunc(a[i], i);
      }
  printf("\n\n Сгенерированная таблица: ");
  for(i=0;i<n;i++){
    printf("HashFunc(%d)=%d ",a[i], b[i]);
  }
  printf("\n\nMax key value: ");
  for(i=0,i<n;i++){
    if(a[i]>max){
      max=a[i];
    }
  }
  printf("key:%d; value:%d", a[i], b[i]);
  system("pause>nul");
  return 0;
}
        
    
