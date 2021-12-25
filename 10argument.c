#include <stdio.h>

void showInfo(char usr[], int age, int mobile){
    printf("Your name: %s", usr);
    printf("Your age: %d \n", age);
    printf("Your number: %d \n", mobile);
}

int main(){
    char usr[12];
    int age;
    int mobile;
    printf("Give me your name, age and number:\n");

    fgets(usr, 12, stdin);
    scanf("%d \n", &age);
    scanf("%d \n", &mobile);
    showInfo(usr, age, mobile);
    return 0;
}