#include<stdio.h>
int main()
{
   int a[10],i,j,n,key,temp,mid,first,last;
   printf("enter n value:");
   scanf("%d",&n);
   printf("enter array elements:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   
   printf("displaying the array elements before sorting\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   for(i=0;i<n-1;i++)
   {
     for(j=0;j<n-1-i;j++)
     {
        if(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }
   }
   printf("\ndisplaying the array elements after sorting\n");
   for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);
   }
   printf("\nenter key element to be searched:");
   scanf("%d",&key);
   
   first=0;
   last=n-1;
   while(first<=last)
   {
       mid=(first+last)/2;
       if(key==a[mid])
       {
          printf("the element %d is found at position %d\n",key,mid+1);
          return(0);
        }
        else if (key<a[mid])
        {
           last=mid-1;
        }
        else
        {
           first=mid+1;
        }
      }
      printf("the element %d not found in array\n",key);
      
      return(1);
       
 }       

