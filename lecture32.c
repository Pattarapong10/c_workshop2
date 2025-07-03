#include <stdio.h>
 
void main(){
    //ตัวแปรปกติ
    float data01;    
    //ตัวแปรพอยน์เตอร์ (เก็บ address ของตัวแปรปกติหรือตัวแปรอาร์เรย์)
    float *data03;    
 
    //เอาข้อมูลไปเก็บในตัวแปร
    data01 = 999;
    data03 = &data01;
 
    printf("Address of data01: %p\n", (void*)&data01);
    printf("Value of data03: %p\n", data03);
    printf("----------------------\n");
    printf("%f\n", data01);
    printf("%f\n", *data03); //ใช้ * เพื่อเข้าถึงค่าที่อยู่ใน address ที่ data03 ชี้ไป
    printf("----------------------\n");
    *data03 = 555;
    printf("%f\n", data01);
    printf("%f\n", *data03);
 
}