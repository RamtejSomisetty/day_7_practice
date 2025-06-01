#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//reverse an array
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void reverse_an_array(int array[],int n){
    for(int i=0;i<n/2;i++){
        swap(&array[i],&array[n-i-1]);
    }
}

void print_array(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(array)/sizeof(array[0]);
    printf("Array before reversing :- ");
    print_array(array,n);
    reverse_an_array(array,n);
    printf("Array after reversing :- ");
    print_array(array,n);
}