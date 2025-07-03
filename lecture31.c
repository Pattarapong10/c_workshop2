//ตัวแปรพอยเตอร์ ใช้เก็บที่อยู่ (address) ของตัวแปรปกติทั่วไป หรือของตัวแปรตัวอาร์เรย์
 
#include <stdio.h>
 
void main(){
    //ตัวแปรปกติ
    float data01;
    //ตัวแปรอาร์เรย์
    int data02[5];
    //ตัวแปรพอยน์เตอร์ (เก็บ address ของตัวแปรปกติหรือตัวแปรอาร์เรย์)
    float *data03;
    int *data04;
    //ตัวแปรพอยน์เตอร์ (เก็บ address ของตัวแปรพอยน์เตอร์)
    float **data05;
 
 
    //เอาข้อมูลไปเก็บในตัวแปร
    data01 = 999;
 
    data02[0] = 10;
    data02[1] = 20;
    data02[2] = 30;
    data02[3] = 40;
    data02[4] = 50;
 
    data03 = &data01;
    data04 = &data02[2];
    data05 = &data03;
 
    printf("Address of data01: %p\n", (void*)&data01);
    printf("Value in data03: %p\n", data03);
    printf("--------------------------\n");
    printf("Address of data02[2]: %p\n", (void*)&data02[2]);
    printf("Value in data03: %p\n", data04);
    printf("--------------------------\n");
    printf("Address of data03: %p\n", (void*)&data03);
    printf("Value in data05: %p\n", data05);
}
 