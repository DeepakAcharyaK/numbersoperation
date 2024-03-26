#include <stdio.h>

int main(void) {
  int num1,num2;

  printf("Enter two numbers:");
  scanf("%d %d",&num1,&num2);

  printf("Sum of two number is %d \n",num1+num2);
  printf("Product of two number is %d \n",num1*num2);
  printf("Difference of two number is %d \n",num1-num2);
  printf("Modulus of two number is %d \n",num1%num2);
  printf("divide of two number is %d",num1/num2);
  
  return 0;
}
