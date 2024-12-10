#include<stdio.h>
int main(){
    int num, sum=0,rem=0;
    printf("Enter the number to get sum of digits:");
    scanf("%d",&num);

     while(num > 0){
        rem = num%10; // 456%10 = 6
        sum=sum + rem * rem; // sum = 0 + 6= 6
        num = num/10;
     }
     printf("Sum of Digits = %d ,sum");
     return 0;
}