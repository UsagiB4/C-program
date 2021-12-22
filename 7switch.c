#include <stdio.h>

int main(){
    char weather;
    printf("Enter current weather condition: \nFor Rain- R \nFor Cloudy- C \nFor Sunny- S\n");
    scanf("%c", &weather);

    switch(weather){
        case 'R':
            printf("Have a cup of tea");
            break;
        case 'C':
            printf("Bring an umbrella");
            break;
        case 'S':
            printf("Amazing");
            break;
        default:
            printf("Invalid input!!!");
            break;
    }

}