#include<stdio.h>
//  ส่วนที่ 1 ส่วนการดึง Library มาใช้
#include<stdbool.h>
// import
void main(){

        //==============ประกาศตัวแปร==========//
        int num1 , num2, sum;
        float result;
        bool total[10];
        // ตัวแปรแบบ boolean
        //===================================//

        //============== input ==============//

        /*printf("Input num 1 :");
        scanf("%d",&num1);

        printf("Input num 2 :");
        scanf("%d",&num2);*/

        //===================================//

        //============ การดำเนินการทางคณิตศาสาตร์ ===============//
        
        //total[0] = 2 < 1;
            //  การ copy กด shift + alt ลูกศรขึ้นหรือลง
        //total[1] = 200 <= 201;
        //total[2] = 2 == 2;
        //total[3] = 2 != 2;
        // การเลือกทีละหลายบรรทัด alt
        //                  จริงทั้งคู่ถึงเป็นจริง
        //         true         false  = false(0)
        total[4] = !(3 < 5 ) && (6 >= 7);
        //                  ถ้ามีค่าใดค่าหนึ่งจะเป็นจริงทันที
        //            true       false  = true(1)
        total[5] = !(5 <= 20) || (6 > 9);
        sum = 5;
        sum *= 10; // sum = sum  + 10;

        //===================================//
        // ctrl + d การเลือกตัวเหมือนกัน
        // ctrl + f2 การเลือกเเก้ไขทุกตัวพร้อมกัน
        //============== Output ==============//
        //printf("Total 1 : %d\n",total[0]);
        //printf("Total 2 : %d\n",total[1]);
        //printf("Total 3 : %d\n",total[2]);
        //printf("Total 4 : %d\n",total[3]);
        //printf("Total 5 : %d\n",total[4]);
        //printf("Total 6 : %d\n",total[5]);
        printf("Total 7 : %d\n",sum);
        
}