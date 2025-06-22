//การแก้ปัญหาโจทย์โปรแกรมด้วยฟังก์ชัน
//1. Dev แต่ละคน สามารถเลือกใช้ประเภทของฟังก์ชันในการแก้ไขปัญหาโจทย์หนึ่งๆ ได้แตกต่างกัน
//2. จำนวนฟังก์ชันที่ถูกสร้างขึ้นจาก Dev. แต่ละคนสำหรับแก้ปัญหาโจทย์หนึ่งๆ อาจจะมีจำนวนไม่เท่ากัน
 
//Ex. หาผลรวม ค่าสูงสุด ต่ำสุด และค่าเฉลี่ย ของตัวเลข 5 จำนวนที่รับจากผู้ใช้ แล้วแสดงผลออกทางหน้าจอ
//หาผลรวม, หาค่าสูงสุด, หาค่าต่ำสุด, หาค่าเฉลี่ย, ป้อนตัวเลข 5 ตัว, แสดงผล
 
#include <stdio.h>
 
double n1, n2, n3, n4, n5;  //Declare global variable
 
void inputNumber(){
  printf("Input number 1: ");   scanf("%lf", &n1);
  printf("Input number 2: ");   scanf("%lf", &n2);
  printf("Input number 3: ");   scanf("%lf", &n3);
  printf("Input number 4: ");   scanf("%lf", &n4);
  printf("Input number 5: ");   scanf("%lf", &n5);
}
 
double sumNumber(){
  return n1 + n2 + n3 + n4 + n5;
}
 
double avgNumber(){
  return (n1 + n2 + n3 + n4 + n5) / 5;
}
 
double maxNumber(){
  double max = n1;
  if(n2 > max) {
    max = n2;
  }
  if(n3 > max) {
    max = n3;
  }
  if(n4 > max) {
    max = n4;
  }
  if(n5 > max) {
    max = n5;
  }
  return max;
}
 
double minNumber(){
  double min = n1;
  if(n2 < min) {
    min = n2;
  }
  if(n3 < min) {
    min = n3;
  }
  if(n4 < min) {
    min = n4;
  }
  if(n5 < min) {
    min = n5;
  }
  return min;
}
 
 
void showResult(){
  printf("Number is : %.2lf %.2lf %.2lf %.2lf %.2lf\n", n1, n2, n3, n4, n5);
  printf("Sum is : %.2lf\n", sumNumber());
  printf("Max is : %.2lf\n", maxNumber());
  printf("Min is : %.2lf\n", minNumber());
  printf("Avg is : %.2lf\n", avgNumber());
 
}
 
void main(){
  inputNumber(); //call function
  showResult();
}
 