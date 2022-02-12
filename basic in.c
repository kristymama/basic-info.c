#include<stdio.h>

int main()
{ 
char name[70] ,branch[40]  ,hobby[60] ;
int regdno;
printf("enter your name\n");
gets(name);

printf("enter your branch\n");
gets(branch);

printf("enter your hobby\n");
gets(hobby);

printf("enter your regd no\n");
scanf("%d",&regdno);

printf("student details are\n");
puts(name);
puts(branch);
printf("%d \n",regdno);
puts(hobby);


return 0;


}
