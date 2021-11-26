#include <stdio.h>

int main(){
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    if (a % 2 == 0){
        printf("A is even\n");
    }
    else{
        printf("A is odd\n");
    }
    if (b % 2 == 0){
        printf("B is even\n");
    }
    else{
        printf("B is odd\n");
    }
    return 0;
}