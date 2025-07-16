#include<stdio.h>
int main()
{
    int rno;
    char Name[30],s1[10],s2[10],s3[10],grade;
    float m1,m2,m3,total,avg;
    FILE *fp;
    fp = fopen("Result.txt","w");

    printf("Enter Name & 3 Subject names");
    scanf("%s%s%s%s",&Name,&s1,&s2,&s3);
    printf("Enter Roll number and marks of 3 subjects");
    scanf("%d%f%f%f",&rno,&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3;    
    if(avg<=100 && avg>=90)
    grade='O';
    else if(avg<=90& avg>=80)
     grade='A';
    else if(avg<=80 && avg>=70)
     grade='B';
    else if(avg<=70 && avg>=60)
     grade='C';
    else if(avg<=60 && avg>=50)
     grade='D';
    else if(avg<=50 && avg>=35)
    grade='E';
    else
    grade='F';
    
    fprintf(fp,"...................Result...............................................................................");
    fprintf(fp,"\nName :%s Roll no:%d",Name,rno);
    fprintf(fp,"\nsub1 :%s Marks:%f",s1,m1);
    fprintf(fp,"\nsub2 :%s Marks:%f",s2,m2);
    fprintf(fp,"\nsub3 :%s Marks:%f",s3,m3);
    fprintf(fp,"\nTotal marks:%f & average:%f" ,total,avg);
    fprintf(fp,"\nGrade:%c",grade);
    return 0;
}   