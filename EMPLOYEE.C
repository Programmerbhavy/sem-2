//wap to store employee details using structure and print them
#include<stdio.h>
#include<conio.h>
struct employee {
 
    float salary;
    int id;
    char name[50];
    char deprt[50];
     
} e[3];
int main()
{
    int i;
    for( i=0;i<3;i++)
    {
        printf("Enter employee details : %d\n",i+1);
        printf("\nEnter E%d Name :",i+1);
        scanf("%s",e[i].name);
        printf("\nEnter E%d ID no : ",i+1);
        scanf("%d",&e[i].id);
        printf("\nEnter E%d Department : ",i+1);
        scanf("%s",&e[i].deprt);
        printf("\nEnter E%d Salary : ",i+1);
        scanf("%f",&e[i].salary);

    }
        for( i=0;i<3;i++)
    {
        printf("\nDepartment Details ---\n",i+1);
        
        printf("Name : %s\n",e[i].name);
        printf("Employee Id : %d\n",e[i].id);
        
        printf("Dept : %s\n",e[i].deprt);
        printf("Salary %f\n",e[i].salary);
        
        printf("\n size of employee structure : %lu bytes\n",sizeof(struct employee));
        printf("size of employee 1 : %lu bytes\n",i+1,sizeof(e[i]));
        printf("size of employee id field : %lu bytes\n",sizeof(e[i].id));
        printf("size of name field : %lu bytes\n",sizeof(e[i].name));
        printf("size of salary field : %lu bytes\n",sizeof(e[i].salary));
    }
   return 0;
}