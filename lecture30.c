//Pointer (ตัวชี้) เป็นโครงสร้างข้อมูล Data Structor ซึ่งใช้กับการเขียนโปรแกรมในเรื่องขอตัวแปร
//จึงเกิดตัวแปรที่เรียกว่า ตัวแปรพอยเตอร์ (Pointer Variable)
//ตัวแปรปกติทั่วไป หรือตัวแปรตัวอาร์เรย์ เก็บข้อมูลอะไรก็ได้ เช่น ตัวเลข ตัวอักษร ......
//ตัวแปรพอยเตอร์ ใช้เก็บที่อยู่ (address) ของตัวแปรปกติทั่วไป หรือของตัวแปรตัวอาร์เรย์
 
#include <stdio.h>
 
void main(){
    int var1 = 20;
    double var2 = 55.99;
    char var3 = '@';
 
    //แสดงหมายเลขที่อยู่ (address number) ของตัวแปร
    printf("Address of var1: %p\n", (void*)&var1);
    printf("Address of var2: %p\n", (void*)&var2);
    printf("Address of var3: %p\n", (void*)&var3);
    printf("-------------------------\n");
    printf("Address of var1: %lld\n", (void*)&var1);
    printf("Address of var2: %lld\n", (void*)&var2);
    printf("Address of var3: %lld\n", (void*)&var3);
}
 