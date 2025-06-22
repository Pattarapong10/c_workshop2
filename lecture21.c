//Function (user-derfine function)
//Function คือ การทำงานหนึ่งๆ จะไม่ทำงานหากไม่เรียกใช้ (call function)
#include <stdio.h>


void funcB(); //Declare function
void funcC(); //Declare function

void funcA(){
    printf("AAAAA\n");
}

void main(){ //Main function
    funcA(); //call function
    funcB(); 
    funcC(); 
    funcA(); 
    funcA(); 

}

void funcB(){
    printf("BBBBB\n");
}

void funcC(){
    printf("CCCCC\n");
}