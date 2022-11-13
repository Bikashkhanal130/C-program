#include<stdio.h>
main(){
	int length,breadth,perimeter,area;
	printf("Enter Length and Breadth of rectangle: \n");
	scanf("%d",&length);
	scanf("%d",&breadth);
	perimeter=2*(length+breadth);
	area=length*breadth;
	printf("Perimeter of rectangle is %d",perimeter);
	printf("\n Area of rectangle is %d",area);
}
