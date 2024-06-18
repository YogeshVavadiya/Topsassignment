#include<stdio.h>

int main()
{
 int n,arr[100],i,max=0;
//	printf("Enter values you want to enter ");
//	scanf("%d",n);		
	printf("Please enter values:\n");
	
	for(i=0;i<5;i++)
	{
	   	scanf("%d",&arr[i]);
 		max=arr[0];
	}
 	for(i=1;i<5;i++)
 	{
  	    if(max<arr[i])
   	    max=arr[i];
 	}
 
 printf("Maximum value of Array: %d",max);
 return 0;
}
