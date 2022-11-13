#include <stdio.h>
main(){
	int length, breadth, area, perimeter;
	printf("Enter length and breadth of Rectangle\n");
	scanf("%d",&length);
	scanf("%d",&breadth);
	perimeter=2*(length+breadth);
	area=length*breadth;
	printf("perimeter of Rectangle is %d",perimeter);
	Printf("area of Rectangle is %d",area);
	return 0;
}
