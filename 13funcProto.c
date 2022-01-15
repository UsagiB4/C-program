#include <stdio.h>

void hello(char[], int);
/* in typical case, c compiler doesn't check for
required parameters in function. If you provide less
value for a function it will give you worning instead of error.
That's where function prototype comes in handy.*/

int main(){

char name[] = "John";
int age = 23;
hello(name, age);
return 0;
}

void hello(char name[], int age){
    printf("%s \n", name);
    printf("%d \n", age);
}
