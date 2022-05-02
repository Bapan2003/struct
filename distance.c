#include<stdio.h>
struct student{
     int feet;
     float inch;
}d1,d2,result;
 int main(){
        printf("Enter 1st Distance:\n");
        printf("Enter d1 feet:\n");
        scanf("%d",&d1.feet);
        printf("Enter d1 inch:\n");
        scanf("%f",&d1.inch);
        printf("Enter 2nd Distance:\n");
        printf("Enter d2 feet:\n");
        scanf("%d",&d2.feet);
        printf("Enter d2 inch:\n");
        scanf("%f",&d2.inch);
       
        result.feet=d1.feet+d2.feet; 
        result.inch=d1.inch+d2.inch;
        while(result.inch>=12.0)
            {
             result.inch=result.inch-12.0;
             result.feet++;
             } 
     printf("\nSum of distances:%d'.%.1f",result.feet,result.inch );

        
return 0;
}
     
