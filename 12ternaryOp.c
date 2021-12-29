#include <stdio.h>

int big_num(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    /*
    ternary operator is shortcut form of if/else statement.
    format:
    (condition) ? value if true: value if false
    */
   int num = big_num(12, 45);
   printf("%d", num);
   return 0;

}