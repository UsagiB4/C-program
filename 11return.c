#include <stdio.h>

int squ(int x){
    int square = x * x;
    return square;
}

int main(){
    int num = squ(2);
    printf("%d", num);
}
