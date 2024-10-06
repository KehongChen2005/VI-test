#include <stdio.h>
//this program is written in C
int main();
int num=1;
for(num=1;num<=250;num++){
    if(num%3==0)
    printf("Fizz");
    else if(num%5==0)
    printf("Fizzy");
    else if(num%7==0)
    printf("Buzz");
    printf(", ")
}
return 0;
