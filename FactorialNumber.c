#include<stdio.h>
#include<conio.h>
void main()
{

    int input,i;
    int fact=1;//for storing product of each iteration
    printf("Enter a number :");//taking input from user
    scanf("%d",&input);
    for(int i=1;i<=input;i++)//logic
        fact=fact*i;
    printf("factorial of %d is %d",input,fact);//print the result
    getch();
}
