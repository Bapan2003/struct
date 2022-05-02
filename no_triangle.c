#include<stdio.h>
int  main(){
int row;
printf("Enter the range:-");
scanf("%d",&row);
for(int i=1;i<=row;i++)
    {
    for(int j=row;j>=i;j--)
       {
        printf(" ");
       }
    for(int l=1;l<i;l++)
       {
       printf("%d",l);
       } 
    for(int k=i;k>=1;k--)
       {
       printf("%d",k);
       }
    printf("\n");
    }
return 0;
}
