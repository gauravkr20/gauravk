#include<stdio.h>
#include<math.h>
#define pi 3.142857
int main()
{
 float x,nume,deno,sum,term,degree;
 int i;
 printf("enter degree:");
 scanf("%f",&degree);
 x=degree*(pi/180.0);
 i=0.0;
 nume=1;
 deno=1.0;
 sum=0;
 do
 {
   term=nume/deno;
   sum=sum+term;
   i=i+2;
   nume=-nume*x*x;
   deno=deno*(i)*(i-1);
 
   
 }
 while(fabs(term)>=0.000001);
 printf("compl cos(%f)=%f\n",degree,sum);
 printf("compl using math.h cos(%f)=%f\n",degree,cos(x));
 return 0;
 }

