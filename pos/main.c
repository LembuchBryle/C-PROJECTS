/*
project: point of sale system.
Description: Takes the prices and quantities of
               two items and amount tendered and output
               change in determination.
Author: Brian lembuch
Date: 6\10\2026.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    int price,price2,qty1,qty2,change,total_amount,
    five_hundreds,two_hundreds,one_hundreds,fiffties,shillings,remainder;
    printf("welcome to champions POS!\n");

    //compute inputs
    printf("Enter the price followed by quantity of: item 1:\n item: ");
    scanf("%d&d", &price, &qty1);
    printf("item 2:");
    scanf("%d&d", &price2,&qty2);

    //perform computations
    total_amount = price * qty1 + price2 * qty2;
    printf("Total amount Due :%d", total_amount);
    printf("Enter total amount tendered : ");
    scanf("%d", amount_tendered);
    change = amount_tendered - total_amount;
    printf("change Due: %d",change);
    five_hundreds = change / 500;
    remainder = change % 500;
    two_hundreds = remainder / 200;
    one_hundreds = remainder / 100;
    remainder = % 100;
    fiffties = remainder / 50;
    shillings = remainder % 50;
    /
    return 0;
}
