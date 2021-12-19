#include <stdio.h>


int main()
{
    /* String input */
    printf("Enter your name: ");
    char names [30];
    //scanf("%s", &name);
    fgets(names, 25, stdin);
    printf("my name is %s", names);
    /*
    Decimel input.
    */
    int a, b, c;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    c = a + b;
    printf("%d + %d = %d \n", a, b, c);



}