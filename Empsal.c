#include<stdio.h>
int main()
{
  float bs,hra,da,tax=0,ttls;
  int id;
  char name[20];
  printf("Enter Employe ID,Name and Basicsalary");
  scanf("%d%s%f",&id,&name,&bs);
  printf("Enter HRA%% & DA%%");
  scanf("%f%f",&hra,&da);
  if(bs>=100000)
  tax=20;
  else if(bs>=80000)
  tax=18;
  else if(bs>=60000)
  tax=16;
  else if(bs>=40000)
  tax=14;
  else
  tax=0;
  ttls=bs+((bs*(da+hra-tax))/100);
  printf("..........................output......................................................................................");
  printf("Id:%d\nName:%s\nHRA:%f\nDA:%f\nTax:%f",id,name,hra,da,tax);
  printf("\ntotal salary of employee:%2f",ttls);
  return 0;
}