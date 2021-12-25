#include <stdio.h>
#include <stdbool.h>

int main(){
    /*
                  NOT
     ______________________________________
     |logical operator for OR is `!` or !=|
     |Checks if at least 1 condition      |
     |is true.                            |  
     |____________________________________|
     */
    //_____code_____


    bool val = false;

    if (!val){
        printf("You are lying!");
        printf("Lying is bad");
    }
    else if (val == true){
        printf("You are a good person.");
    }

}