#include<stdio.h>
int main(){
    int input;
    scanf("%d", &input);
    if(input == 0){
        printf("Zero");
    }
    else if (input < 0)
    {
        printf("Negative");
    }
    else{
        printf("Positive");
    }
    
    return 0;
}