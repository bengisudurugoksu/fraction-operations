#include <stdio.h>
#include "util.h"


int main() {

    /* A fractional number: 13/7 */
    int num1 = 13, den1 = 7;
    /* A second fractional number: 13/11 */
    int num2 = 13, den2 = 11;
    /* An unitilized fractional number */
    int num3, den3;
    /* The values we are going to use for the second part */
    int firstnum, secondnum, firstden, secondden;

    printf("First number: ");
    fraction_print(num1, den1);
    printf("\n");

    printf("Second number: ");
    fraction_print(num2, den2);
    printf("\n");

    printf("Addition: ");
    fraction_add(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    printf("Subtraction: ");
    fraction_sub(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    printf("Multiplication: ");
    fraction_mul(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    printf("Division: ");
    fraction_div(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    /*User gives the desired values(firstnum,firstden,secondnum,secondden),with the given values we apply multiplication and division*/
    printf("The first numerator is: ");
    scanf("%d", &firstnum);
    
    printf("The first denominator is: ");
    scanf("%d", &firstden);
    
    printf("The second numerator is: ");
    scanf("%d", &secondnum);
    
    printf("The second denominator is: ");
    scanf("%d", &secondden);
    
    printf("Multiplication for the desired values : ");
    fraction_mul(firstnum, firstden, secondnum, secondden, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");
    
    printf("Division for the desired values : ");
    fraction_div(firstnum, firstden, secondnum, secondden, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");


    return(0);
}
