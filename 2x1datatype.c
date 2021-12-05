#include<stdio.h>
#include<stdbool.h>

int main(){
    // Single Character %c. Always use single quote to store single character.
    char ch = 'N';
    // Array of Characters %s. Use Double quote to store Array of characters.
    char name[] = "Java";
    /*
    --------------------------------------------------
    */
    // Float %f. Percision limit upto 7 decimel points.
    float pi = 3.14159;
    // Double %lf. Percision limit upto 16 decimel points.
    double pointNum = 1.2345378947293;
    // <<<<<______Printing Double and Float______>>>>>
    //printf("this is a float: %0.5f \n", pi);       // to print specific amount of decimel point use %0.<digit>f for float 
    //printf("this is a double: %0.10lf \n", pointNum);  // %0.<digit>lf for double
    /*
    --------------------------------------------------
    */
    // Boolian %d
    bool t = true;
    bool f = false;
    /*
    --------------------------------------------------
    */
    // Different char types %d or %c
    // Char can store numbers from -128 to 127
    char num = 80;
    //printf("Decimale value: %d \n", num);  // this will treat 'num' as intiger.
    //printf("ASCII Value: %c \n", num);  // This will treat 'num' as a ascii character. < ASCII values can be from 0 to 127 only >

    // Unsigned variables can only store positive values. This also increases the range.
    // unsigned char can store from 0 - 255 %d or %c
    unsigned char chr = 202;
    // (%c)this can also be convert to ascii but only upto 0 - 127. any value above that will give error.
    // (%d) can only work upto 255. any value more than that will return to 0.
    //printf("%d %c \n", chr, chr);
    /*
    --------------------------------------------------
    */
   // intiger can take huge value and also takes 4 bytes of memory while
   // short intiger can take only -32,768 to +32,767 and takes 2 bytes of memory.
   // long long intiger can take suuuuuuuppppppppeeeeeeerrrrrrr HUGE numbers. takes 8 bytes of memory.
   int x = 2325342; // %d (%u for unsigned int)
   short int a = 3432;  // %d 
   long long gone = 1234567890973874; // %lld (%llu for unsigned long long intiger)
}