#include<stdio.h>

void main(){

    int std1_math,std2_programming,std3_science;

    printf("*****************************************\n");
    printf("Plese input score in sam line order by subject:\n");
    printf("subject=> 1.math 2.programming 3.science\n");
    
    printf("student 1 :");
    scanf("%d %d %d",&std1_math,&std2_programming,&std3_science);

    printf("score math %d program %d science %d",std1_math,std2_programming,std3_science);
}