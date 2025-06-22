//ประเภท 2 คือ Function ที่มี parameter และไม่มี return value (Have parameters and no return value)
//Parameter เป็นตัวแปรประเภทหนึ่ง จะเก็บ/รับข้อมูลที่ส่งมาจากการเรียกใช้ฟังก์ชัน
 
#include <stdio.h>
 
void showLine();
 
void funcSau(int a, int b, double c){
  double sum = a + b + c;
  printf("Sum of a b c is : %.2lf\n", sum);
}
 
void WowWowWow(char name[50], int age){
  printf("Your name is : %s\n", name);
  printf("Your age is : %d\n", age);
}
 
void main(){
  showLine();
  funcSau(10, 20, 10.25 );//เวลา call function ที่มี parameters ต้องส่ง arguments ให้ paramters ด้วย
  showLine();
  WowWowWow("Sombat", 27);
  WowWowWow("Somjai", 27);
  showLine();
}
 
void showLine(){
  printf("***********************\n");
}