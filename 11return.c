#include <stdio.h>

/*
in the squ() function we are returning an integer
called square. 
as we're returning integer, we've used `int` before 
creating the function. If we want to return a float/
double/ char, we have to add it's format specifier. 
*/
int squ(int x){
    int square = x * x;
    return square;
}

int main(){
    int num = squ(2);
    printf("%d", num);
}
