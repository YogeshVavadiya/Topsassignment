#include <stdio.h>

int isPalindrome(int num) 
{
    int originalNum = num;
    int reversedNum = 0;    

    while (num > 0) 
	{
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    if (originalNum == reversedNum) 
	{
        return 1; 
    }
	else
	{
        return 0; 
    }
}

int main()
 {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPalindrome(number)) 
	{
        printf("%d is a palindrome.\n", number);
    } 
	else 
	{
        printf("%d is not a palindrome.\n", number);
    }
    
    return 0;
}

