//ประเภท 3 คือ Function ที่ไม่มี parameter และมี return value (No parameter and has return value)
 
#include <stdio.h>
 
double funcB();
 
int funcA(){
  return 10;
}
 
void main(){
  int  xx;
 
  xx = funcA();
 
  printf("Valure of funcB return : %.2lf\n", funcB());
 
}
 
double funcB(){
  printf("Wow wow wow\n");
  return 20.5 + 10.5;
}