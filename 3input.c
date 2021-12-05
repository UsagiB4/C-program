#include <stdio.h>
#include <string.h>

int main()
{
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

    /* String input */
    printf("Enter your name: ");
    char name[30];
    scanf("%s", name);
    printf("Hello %s", name);

    return 0;
}