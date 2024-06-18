
#include <stdio.h>

int main() 
{
    int i,j, num = 1;

    for ( i = 0; i < 5; i++) 
	{ 
        for ( j = 0; j < 10; j++) 
		{ 
            printf("%02d ", num); 
            num++;
        }
        printf("\n"); 
    }
    return 0;
}

