//อาร์เรย์ Array คือ แถวลำดับ/ข้อมูลหลายๆ ข้อมูล ใช้กับการเขียนโปรแกรมในเรื่องของตัวแปร -> ตัวแปรอารเรย์
//พอยเตอร์ Pointer คือ ตัวชี้ ใช้กับการเขียนโปรแกรมในเรื่องของตัวแปร -> ตัวแปรพอยเตอร์
//สตรักเจอร์ Structure คือ โครงสร้าง ใช้กับการเขียนโปรแกรมในเรื่องของตัวแปร -> ตัวแปรสตรักเจอร์
 
#include <stdio.h>
#include <string.h>
 
void main(){
    int data1[] = { 10, 20, 30, 40};
 
    int *data2 = &data1[0];
 
    //สร้างสตรักเจอร์ (โครงสร้าง)
    struct IoTStudent{
        int id;
        char fullname[50];
        float gpa;
    };
 
    //สร้างตัวแปรสตรักเจอร์
    struct IoTStudent sau01 = {11, "Sombat",  3.55};
    struct IoTStudent sau02 = {22, "Somsri",  2.99};
 
    printf("%d\n", data1[2]);  
    printf("%p\n", data2); //หรือ %lld
    printf("%s\n", sau01.fullname);
    printf("%d\n", sau02.id);  
    printf("---------------------------\n");
    data1[2] = 30000;
    data2 = &data1[3];
    strcpy(sau01.fullname, "Somjai");
    sau02.id = 99;
    printf("%d\n", data1[2]);  
    printf("%p\n", data2); //หรือ %lld
    printf("%s\n", sau01.fullname);
    printf("%d\n", sau02.id);  
}
 