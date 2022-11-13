#include<stdio.h>
main(){
	int age;
	float salary;
	char gender;
	printf("Enter age:");
	scanf("%d",&age);
	printf("Enter salary:");
	scanf("%f",&salary);
	printf("Enter gender(m/f):");
	fflush(stdin);
//	scanf("%c",&gender);
	gender=getchar();
	//scanf("%c",&gender);
	printf("%d %f %c", age, salary, gender);
	//return 0;
}
