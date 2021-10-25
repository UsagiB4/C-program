#include <stdio.h>
/*
Loops in C lang.
> while
> do while
> for
*/

int main(){
    int a;
    scanf("%d", &a);
    while(a < 10)
    {
        printf("%d \n", a);
        a++;
    }
    
    return 0;
}

