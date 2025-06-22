//ประเภท 4 คือ Function ที่มี parameter และมี return value (Have parameters and has return value)
#include <stdio.h>
double multiplyNumber(double n1, double n2);
double divideNumber(double n1, double n2);
 
double addNumber(double n1, double n2){
  double value = n1 + n2;
  return value;
}
 
double subNumber(double n1, double n2){
  double value = n1 - n2;
  return value;
}
 
void main(){
  printf("10 + 555 = %.2lf\n", addNumber(10, 555));
  printf("500 + 100 = %.2lf\n", addNumber(500, 100));
  printf("20 - 5 = %.2lf\n", subNumber(20, 5));
}
 
double multiplyNumber(double n1, double n2){
  double value = n1 * n2;
  return value;
}
 
double divideNumber(double n1, double n2){
  double value = n1 / n2;
  return value;
}