#include<stdio.h>

int main(){
    int input;
    scanf("%d", &input);

    if(input % 2 == 0 && input >= 0){
    printf("Even");
    }else{
        printf("Odd");
    }
    
    return 0;
}