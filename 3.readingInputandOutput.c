#include<stdio.h>
#include<conio.h>
 void main()
 {

     int firstnum,secondnum,sum;
     float average;

     //getting input from user
      printf("Enter first number :");
      scanf("%d",&firstnum);

      printf("Enter second number :");
      scanf("%d",&secondnum);

      //logic
      sum=firstnum+secondnum;
      average=sum/2.0;

      printf("sum is %d and average is %f",sum,average);
      //getch();
 }
