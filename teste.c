#include <stdio.h>


int f;



void main(){



    for(f=0;f<51;f++){

        printf("%i",f);
        if(f%3==0){
            printf("Fizz");
        }
        if(f%5==0){
            printf("Buzz");
        }

        printf("\n");
    }





}