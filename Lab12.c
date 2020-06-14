#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int MakeHashFunc(int key, int i){
 return key*(i+25)+13;
}
int main() {
 int n;
 printf("Enter Array size:");
 scanf("%d", n);
 srand(time(NULL));
 int a[n], i, b[n], max = 0;
 for(i=0;i<n;i++){
 a[i]=rand() % 100;
 printf(" key(%d)",a[i]);
 b[i]=MakeHashFunc(a[i],i);
 }
 printf("\n\n Generated HashTable:");
 for(i=0;i<n;i++){
 printf(" HashFunc(%d)=%d ",a[i], b[i]);
 }
 printf("\n\nMax key value:");
 for(i=0;i<n;i++){
 if(a[i] > max){ 
 max = a[i];
 }
 }
 printf("key:%d; value:%d", a[i], b[i]);
 return 0;
}
