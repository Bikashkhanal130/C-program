#include<stdio.h>
main(){
	int a=25, b=23, c=10, d=33, v1=a+b/c*d, v2=c*d/b+a,v3=c%4+d/10,v4=c%(4+d)/10;
	v1=a+b/c*d;
	v2=c*d/b+a;
	v3=c%4+d/10;
	v4=c%(4+d)/10;
	
	printf("The value of v1 is %d \nThe value of v2 is %d,\nThe value of v3 is %d,\nThe value of v4 is %d",v1,v2,v3,v4);
	
	 
}
