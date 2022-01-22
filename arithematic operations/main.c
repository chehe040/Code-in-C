//
//  main.c
//  arithematic op.
//
//  Created by Mahesh Soni on 12/12/20.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, add, sub, product;
    float division;
    printf("Enter any two numbers of choice: ");
    scanf("%d %d", &num1, &num2);
    
    add= num1 + num2;
    printf("The additon of %d and %d is: %d\n",num1, num2, add);
    
    if(num1> num2)
    {
        sub = num1- num2;
        printf("The subtraction of %d and %d is: %d\n", num1, num2, sub);
    }
    else
    {
        sub = num2- num1;
        printf("The subtraction of %d and %d is: %d\n", num1, num2, sub);
    }
   
    
    product = num1 * num2;
    printf("The multiplication of %d and %d is: %d\n", num1, num2, product);
    
    division = num1 / num2;
    printf("The division of %d and %d is: %.2f\n", num1, num2, division);
    
    
    return 0;
}
