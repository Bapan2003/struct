#include<stdio.h>
struct student{
     char name[100];
     int id;
     char dept[100];
};
 int main(){
      int n;
      printf("Enter the information:-\nHow many student are there:\n");
      scanf("%d",&n);
      struct student p[n];
      for(int i=0;i<n;i++)
        {
        printf("Enter the student name of %d:\n",i+1);
        scanf("%s",p[i].name);
        printf("\nenter the student id of %d:\n",i+1);
        scanf("%d",&p[i].id);
        printf("\nEnter the department name of student of %d:\n",i+1);
        scanf("%s",p[i].dept);
        }
      for(int i=0;i<n;i++)
        {
        printf("\nFor student :%d",i+1);
        printf("\nstudent name :%s\n",p[i].name);
        
        printf("\nstudent id:%d\n",p[i].id);
        
        printf("\ndepartment name:%s\n",p[i].dept);
        
        }
        
return 0;
}
     
