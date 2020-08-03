#include<stdio.h>
struct student{
char name[50];
int roll;
float marks;



};

int main(){
struct student s;
printf("enter name\n");
scanf("%s",s.name);

printf("enter roll\n");
scanf("%d",s.roll);



printf("name:%s\n",s.name);
printf("roll:%d\n",s.roll);
return 0;
}
