#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
void kadane_algorithm(int array[],int n,int *top,int *last){
    int temp_top=0;
   
    int max_length = INT_MIN;
    int current_sum=0;
    for(int i=0;i<n;i++){
        current_sum = current_sum + array[i];
        if(max_length < current_sum){
            max_length = current_sum;
            *top = temp_top;
            *last= i;
          
        }
        if(current_sum <0){
            current_sum =0;
            temp_top = i+1;
           
        }
    }

}
int main(){
    int array[] = {1,-1,-3,4,-1,2,1,-2};
    int n =sizeof(array)/sizeof(array[0]);
    int top=0,last=0;
    kadane_algorithm(array,n,&top,&last);
    printf("the largest sub array :- ");
    for(int i= top;i<=last;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}