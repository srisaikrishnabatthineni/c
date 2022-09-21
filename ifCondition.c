#include<stdio.h>
#include<conio.h>
void main(){
  int input;
  printf("Enter a number :");
  scanf("%d",&input);

  if(input==0){
    printf("zero");
  }
  else if(input%2==0){
    printf("%d is even number ",input);
  }
  else{
    printf("%d odd number",input);
  }



}
