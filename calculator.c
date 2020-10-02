#include<stdio.h>
#include<math.h>
//used math.h header file also for maths operations like tan,sin,log,etc. in this calculator//
int main()
{float a,b,c;
char op;
printf("This is a calculator\n");
printf("Enter '+' for addition\n Enter '-' for subtraction \n Enter '/' for division\nEnter '*' for multiplication\nEnter '^' for power  \n Enter '$' for square root\nEnter 't' for tan_function \nEnter 's' for sin_function \nEnter 'c' for cos_function\n  Enter l for log_function \n");
	

printf("Enter the operation you want:\n");
scanf(" %c",&op);
switch (op)
{case'+':

printf("Enter the first no.:\n");
scanf("%f",&a);
printf("Enter the second no.:\n");
scanf("%f",&b);
c=a+b;
printf("The answer is %f\n",c);
break;
case'-':

printf("Enter the first no.:\n");
scanf("%f",&a);
printf("Enter the second no.:\n");
scanf("%f",&b);
c=a-b;
printf("The answer is %f\n",c);
break;
case'*':

printf("Enter the first no.:\n");
scanf("%f",&a);
printf("Enter the second no.:\n");
scanf("%f",&b);
c=a*b;
printf("The answer is %f\n",c);
break;
case'/':

printf("Enter the first no.:\n");
scanf("%f",&a);
printf("Enter the second no.:\n");
scanf("%f",&b);
c=a/b;
printf("The answer is %f\n",c);
break;
case'$':
printf("Enter the no.:\n");
scanf("%f",&a);
c=sqrt(a);
printf("The answer is %f\n",c);
break;


case'^':
printf("Enter the first no.:\n");
scanf("%f",&a);
printf("Enter the second no.:\n");
scanf("%f",&b);
c=pow(a,b);
printf("The answer is %f\n",c);
break;
	


default:
printf("syntax error");
}
printf("\nCO2I-B Group 2 Micro-Project\n");
 return 0;


}
