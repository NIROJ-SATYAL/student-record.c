#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
 struct student 
 {
 char name[500];
 char adress[1000];
 int roll;
 int fee;
 char section[30];
 char searched[1234];
};
struct student st[234];

	int n,i;
	char searched;
	
	
	printf("how many student are in clz:\n ");
	scanf("%d",&n);
	printf("enter the name  section roll fee adress of student:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s%s%d%d%s",st[i].name,st[i].section,&st[i].roll,&st[i].fee,st[i].adress);
	
	}
	printf("\n\t\t\t\t\tDISPLAYING INFORMATION\t\t\t\t\t\n");
	printf("name\t\tsection\t\troll\t\tfee\t\tadress");
	for(i=0;i<n;i++)
	{
				
		
		printf("\n%s\t\t%s\t\t%d\t\t%d\t\t%s",st[i].name,st[i].section,st[i].roll,st[i].fee,st[i].adress);
	}


	
	return 0;
}
