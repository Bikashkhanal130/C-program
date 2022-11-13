#include<stdio.h>
#include<math.h>
main(){
	float x,y,z,perimeter,area,temp,s;
	printf("Enter the value of x,y,z");
	scanf("%f %f %f",&x,&y,&z);
	perimeter=x+y+z;
	temp=s*(s-x)*(s-y)*(s-z);
	area=pow(temp,0.5);
	printf("Perimeter of triangle is %f",perimeter);
	printf("area of triangle is %f",area);
	
}
