#include <stdio.h>

int main()

{
    int a, b;
    a = 0;  //(if here 0 replace with any number like 34 then after compiling the result will  1 in first line )
    b = 34;   


    printf("a+b = %d\n" ,  a && b ); //here is changes   && replce with ||   then other result will show       or replce with a && b with !b then other result will show diffrent result
    printf("a-b = %d\n" , a-b );
    printf("a*b = %d\n" , a*b );
    printf("a/b = %d\n" , a/b );

    return 0;



}