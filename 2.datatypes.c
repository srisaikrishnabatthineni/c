#include<stdio.h>
#include<conio.h>
void main()
{
    //integer type
    int a=10,b=5;// here int is data type ,a is variable and 10 is value likewise b
    int c; //c is storing value after summation
    c=a+b;// adding two numbers
    printf("sum of %d and %d is %d ",a,b,c);

    //float type

    float p=10.5, q=20.0;
    float r=p+q;
    printf("\nsum of %f and %f is %f",p,q,r);

    //char type

    char gender='M';
    printf("\nGender is %c",gender);

    char name='sai krishna';
    int age=21;
    float weight=65.5;
    printf("\nMy name is %c, my age is %d and weight is %f",name,age,weight);

}
