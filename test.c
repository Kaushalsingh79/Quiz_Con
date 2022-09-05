#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int result(char arr[]);
struct details{
	char name[50];
	int rollno;
	int marks=0;
}student;

void StuDetail(){
	printf("Enter Your Name:");
	gets(student.name);
	printf("Enter Your Roll No.:");
	scanf("%d",&student.rollno);
}
void db(){
	FILE *fl;
	fl = fopen("database.txt","w+");
	fprintf(fl,"%s\t%d\t%d\n",student.name,student.rollno,student.marks);
}
	
	
void main()
{
	
    StuDetails();
    FILE *fp;
    char text[255];
    char ar[4];
 fp = fopen("Test.txt","r+");  
if(fp == NULL)
{
    perror("UOF");
    exit(1);
}
for(int j=0;j<4;j++)
{
for(int i=0; i<4;i++)
  {fgets(text,20,fp);
   printf("%s",text);
     
   }
	printf("\n");
	printf("Enter your choice:");
	scanf("%s",&ar[j]);
	printf("\n");
	clrscr();

 } 
student.marks=result(ar);
printf("<<<<----Options You Marked----->>>>\n") 
for(int i=0;i<4;printf("%c ",ar[i++]));
c
printf("\nMarks Obtained: %d",student.marks);
db();
	
}

int result(char arr[])
{
	FILE *fp;
	char p[4],key[4];
	int r=0;
	fp = fopen("Key.txt","r");
	for(int i=0;i<4;i++)
	{
	fgets(p,4,fp);
	key[i]=p[0];
	}
	
	
 for(int i=0;i<4;i++)
 {
 	if(arr[i]==key[i])
 	r=r+4;
 	else if(arr[i]==0)
 	r=r+0;
 	else if(arr[i]!=key[i])
 	r--;
 	
 }
 return r;
}
