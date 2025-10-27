#include <stdio.h>
int main(){
char operator;
double num1;
double num2;
double result;


printf("select the operation (+ - * /): ");
scanf("%c",&operator);

printf("enter one num 1: ");
scanf("%lf",&num1);

printf("enter a second num 2: ");
scanf("%lf",&num2);


    switch (operator)
{
    case '+':
   result = num1 + num2;
   printf("result is: %.2lf\n",result); 
    break;

     case '-':
   result = num1 - num2;
   printf("result is: %.2lf\n",result); 
    break;
     case '*':
   result = num1 * num2;
   printf("result is: %.2lf\n",result); 
    break;

     case '/':
   result = num1 / num2;
   printf("result is: %.2lf\n",result); 
    break;

    default:
    printf("%c is not valid", operator);
    break;
}

return 0;
}
