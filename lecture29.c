//ประยุกต์ใช้ Array แก้ไขปัญหาโจทย์โปรแกรม
 
//โปรแกรมหาค่าเฉลี่ยของตัวเลข 50000 จำนวนที่รับทางแป้นพิมพ์ แล้วแสดงผลออกมา
#include "stdio.h"
 
void main(){
  int i;
  int n[50000]  ;
  int sum = 0;
  double avg = 0;
 
  for(i = 0; i < 50000; i = i + 1){
    printf("Input number %d : ", i);
    scanf("%d" , &n[i]);
  }
 
  for(i = 0; i < 50000; i = i + 1){
    sum = sum + n[i];
  }
 
  avg = sum / 500000.0;
  printf("------------------------\n");
  printf("Average of number is : %.2lf\n", avg);
 
}