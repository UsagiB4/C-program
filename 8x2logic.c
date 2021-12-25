#include <stdio.h>

int main(){
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
}