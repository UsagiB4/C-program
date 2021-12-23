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

    /*
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
    */

    /*
                  OR
     ______________________________________
     |logical operator for OR is `||`     |
     |Checks if at least 1 condition      |
     |is true.                            |  
     |____________________________________|
     */
    //_____code_____
    int weth;
    int obj;
    printf("Enter current weather status:\nSunny (1)\nRainy(2)\nCold(3)\n>>> ");
    scanf("%d", &weth);
    
    if(weth == 1){
        printf("Have a nice day");
    }
    else if(weth == 2){
        printf("What are you carrying with you?\nUmbrella(1)\nRain Coat(2)\n");
        scanf("%d", &obj);
        if (obj == 1 || obj == 2){
        
            printf("Have fun in the rain");
        }
        else{
            printf("Please take an umbrella with you.");
        }
        
    }
    else if (weth == 3){
        printf("What are you wearing today?\nCoat(1)\nSweater(2)\n");
        scanf("%d", &obj);
        if(obj == 1 || obj == 2){
            printf("You are free to go.");
        }
        else{
            printf("Wear something to stay warm");
        }
    }
    return 0;

}