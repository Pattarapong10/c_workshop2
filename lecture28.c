//Array ปัจจุบันประเภทของArray มีอยู่ 4 ประเภท (แต่ใช้โดยทั่วไปอยู่ 2 ประเภท)
//one Dimension Array is 1 มิติ  มีแค่ 1 แถว 
//เช่น int DataA[5];
//two Dimension Array คือ 2 มิติ  มีมากกว่า 1 แถว
//เช่น int dataA[3][5]; คือ dataB มี 3 แถว แถวละ 5 ช่อง
//three Dimension Array คือ 3 มิติ
//เช่น int dataC[2][4][3];
//multi Dimension Array คือหลายมิติ

#include <stdio.h>

void main(){
    int dataA[3];
    int dataB[] = {11, 22, 33, 44,};

    int dataC[2][8];
    int dataD[][3] = {
        {10, 20, 30},
        {11, 22, 33},
        {111, 222, 333},
        {1111, 2222, 3333}
    };

    dataA[2] = 999;
    dataD[1][2] = 555;


}