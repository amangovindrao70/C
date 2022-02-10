// Date - 29/01/2022

#include <stdio.h>              
#define PI 3.14

int main()


{
    int a = 8;
    const float b = 7.333;
    // PI = 7.33; //cannot do this since PI is constant
    
    /*
    printf("tab character \t");
    printf("backslash chaacter \\");
    printf("backslash n chaacter \\n");             This are Escape Sequence
    printf("window sound \a"); 
    */

    printf("%f", PI);
    // b = 7.22; //cannot do this since b is constant

    return 0;



}