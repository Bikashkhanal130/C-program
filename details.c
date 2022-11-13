#include<stdio.h>
main(){
char gender[20];
int age;
float salary;
FILE *fp;
fp=fopen("emp.txt","w+");
printf("enter gender");
scanf("%s",&gender);
printf("enter age");
scanf("%d",&age);
printf("Enter salary");
scanf("%f",&salary);
fprintf(fp,"%s %d %f",gender,age,salary);

printf("\n \n");
fscanf(fp,"%s %d %f",gender,age,salary);
printf("Name=:-%s\nAge:-%d\nSalary:-%f\n",gender,age,salary);

return 0;
}
