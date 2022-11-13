#include<stdio.h>
main(){
	//to initialize two variables a and b 
	int number1, number2, sum, difference, product, quotient;
	printf("Enter two integers value:");
	scanf("%d %d", &number1, &number2 );
	sum=number1+number2;
	difference=number1-number2;
	product=number1*number2;
	quotient=number1/number2;
	
	printf("\n The sum of the given number is %d",sum);
	printf("\n The difference of the given number is %d",difference);
	printf("\n The product of the given number is %d",product);
	printf("\n The quotient of the given number is %d",quotient);
	}
