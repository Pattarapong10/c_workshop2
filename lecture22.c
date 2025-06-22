//ประเภทของ Function มี 4 ประเภท
//ประเภท 1 คือ Function ที่ไม่มี parameter และไม่มี return value (No parameter and no return value)
 
#include <stdio.h>
 
void showHey( );
 
void showHello( ){ //ไม่มี parameter คือ ไม่มีอะไรในวงเล็บหลังชื่อฟังก์ชัน
  printf("Hello\n");
  //ไม่มีคำสั่ง return ในตัว function และ return type ต้องเป็น void
}
 
void showHi( ){
  printf("Hi\n");
  showHello();
}
 
void main(){
  showHello();
  showHello();
  showHi();
}
 
void showHey( ){
  printf("Hey\n");
}