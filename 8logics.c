#include <stdio.h>


int main(){
    /*
                  And
     ______________________________________
     |logical operator for AND is `&&`    |
     |Checks 2 or more condition is true. | 
     |____________________________________|
     */
    //_____code_____

    int price;
    printf("Enter the price of eggs\n");
    scanf("%d", &price);
    if(price >0 && price <= 40){
        printf("I can buy eggs! :D ");
    }
    else if (price > 40){
        printf("Too expensive for me! :( ");
    }
    else{
        printf("Invalid Value");
    }
    

    
    return 0;

}