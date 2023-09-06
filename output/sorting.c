#include <stdio.h>

void swap(int*,int*);
int main(){

    int a = 20 ,b=10;
    swap(&a,&b);
    printf("a : %d \t b : %d ",a,b);


    return 0;
}

void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
     printf("a : %d \t b : %d \n",*a,*b);
}