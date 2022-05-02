#include<stdio.h>
int  main(){
int row;
printf("Enter the row value:-");
scanf("%d",&row);
for(int i=0;i<row;i++)
    {
    for(int j=row;j>=i;j--)
       {
        printf(" ");
       }
    for(int l=0;l<i;l++)
       {
       printf("%c",'A'+l);
       } 
    for(int k=i;k>=0;k--)
       {
       printf("%c",'A'+k);
       }
    printf("\n");
    }
return 0;
}
