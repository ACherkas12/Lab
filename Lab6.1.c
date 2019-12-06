#include <stdio.h>
#include <stdlib.h>

int main(void){

    system("chcp 1251");
    int i, index1, index2, n=10;
    int sum, max, min;
    int mass[n];
    int *p=mass;
    int *q=mass+n-1;
    int k;
    for(k=0;k<n;k++){
        if(*(mass+k)>max)
            max=*(mass+k);
    }
    printf("Максимальный элемент массива равен %d\n", max);
    for(k=0;k<n,k++){
        if(mass[k]<0){
            if(index1==NULL) index1=k;
            else if(index2==NULL && index1 !=k) index2=k;
            else break;
        }
    }
    printf("index1: %d и index2: %d\n", index1, index2);
    for(k=0;k<n;k++){
        if(k>index1 && k<index2){
            sum+=mass[k];
        }
    }
    printf("sum: %d\n", sum);
    system("pause>nul");
    return 0;
}
