#include<stdio.h>
int main()
{
  float bs,hra,da,tax,ttls;
  int id;
  char name[20];
  printf("Enter Employe ID,Name and Basicsalary");
  scanf("%d%s%f",&id,&name,&bs);
  if(bs>=10000