#include<stdio.h>
main(){
	float celsius, fahrenheit;
	printf("enter the value of fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/9*5;
	printf("the value of celsius is %f",celsius);

}
