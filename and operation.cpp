#include<stdio.h>
int main()
{
int counter=1,a,b,res,INS,performance_measure;
printf("ENTER NUMBER-1-");
scanf("%d",&a);
counter=counter+1;
printf("ENTER NUMBER-2-");
scanf("%d",&b);
counter=counter+1;
res= a&&b;
counter=counter+1;
printf("%d",res);
counter=counter+2;
printf("enter no. of instructions:");
scanf("%d",&INS);
performance_measure=INS/counter;
printf("performance measure:%d",performance_measure);
}

