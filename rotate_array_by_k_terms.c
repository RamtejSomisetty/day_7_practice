#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void rotate_array_by_k_terms(int array[],int n){
    int temp=array[0];
    for(int i=0;i<n-1;i++){
        array[i]=array[i+1];
    }
    array[n-1]=temp;
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
    printf("Array before rotation          :- ");
    print_array(array,n);
    int k=2;
    for(int i=0;i<k;i++){
        rotate_array_by_k_terms(array,n);
    }
    printf("Array after rotation by %d terms:- ",k);
    print_array(array,n);
}