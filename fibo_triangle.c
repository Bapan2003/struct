#include<stdio.h>
int fibo(int);
int  main(){
int row;
printf("Enter the row value:-");
scanf("%d",&row);
for(int i=0;i<row;i++)
    {
    for(int j=0;j<=i;j++)
       {
       printf("%d  ",fibo(j));
       }
    printf("\n");
    }
return 0;
}
int fibo(int term){
 if(term<=1)
   return 1;
 else
   return fibo(term-2)+fibo(term-1);
}
