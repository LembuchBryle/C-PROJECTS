/*
Project:Calculator
author: Brian Maru
Date: 29/09/2026
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     //variable inputs
    int num1,num2;
    int sum, diff,product;
    float quotient;
    //capture inputs
    printf("Enter two values :");
    scanf("%d%d",&num1,&num2);

    //computations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = (float) num1 /num2;


   //outputs
   printf("%d + %d =%d\n",num1,num2,sum);
   printf("%d - %d = %d\n",num1,num2,diff);
   printf("%d * %d = %d\n",num1,num2,product);
   printf("%d / %d= %f\n",num1,num2,quotient);
   return 0;
}
