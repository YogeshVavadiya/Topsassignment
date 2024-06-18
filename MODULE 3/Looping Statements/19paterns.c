#include<stdio.h>
int main()
	{
		int i, j ,k=1;			
		//patern no 1
		printf("\n\n______________Pattern no 1______________\n\n");
		for(i=0; i<6; i++)
		{
			for(j=1; j<=i; j++)
			{	
				if (j%2==0)
				{
					printf("0");
				}
				else{printf("1");
				}		
			}
			printf("\n");
		}
		//patern no 2
		char ab='A';
		printf("\n\n______________Pattern no 2______________\n\n");
		for(i=1; i<6; i++)
		{
			for(j=1; j<=i;j++)
			{
				printf("%c",ab++);	
			}
			printf("\n");
		}
		char op='A';
		printf("\n\n______________Pattern no 3______________\n\n");
		for(i=0; i<6; i++)
		{
			for(j=0; j<=i; j++)
				{
					printf("%c",op+j);
				}
			printf("\n");
		}
		//patern no 4
		printf("\n\n______________Pattern no 4   ______________\n\n");
		for(i=0; i<6; i++)
		{
			for(j=1; j<=i; j++)
			{
				printf("%d ",k++);
			}
			printf("\n");
		}
		int r,c;
		//patern no 5
		printf("\n\n______________Pattern no 5   ______________\n\n");
		
		for (r=1; r<=6; r++)
		{
			for(c=1; c<=6-r; c++)
			{
				printf(" ");
			}
			for(i=1; i<=r; i++)
			{
				printf("*");
			}
			for(j=1; j<=r-1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
			//patern no 6
		printf("\n\n______________Pattern no 6   ______________\n\n");
		for (r=1; r<=(9+1)/2; r++)
		{
			for(c=1; c<=(9+1)/2-r; c++)
			{
				printf(" ");
			}
				for(i=1; i<=r; i++)
			{
				printf("*");
			}
		printf("\n");
		}
	
		for (r=(9-1)/2; r>0; r--)
		{
			for(c=1; c<=(9-1)/2-r; c++)
			{	
				printf(" ");
			}
				printf(" ");
			for(i=1; i<=r; i++)
			{
				printf("*");
			}
			printf("\n");
		}
	
		return 0;
	}
