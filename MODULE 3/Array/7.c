#include <stdio.h>

int Length(char str[]) 
{
    int l = 0;
    while (str[l] != '\0') 
	{
        l++;
    }    
    return l;
}

int main() {
    char str[100]; 
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int l = Length(str);
    printf("Length of the string is: %d\n", l);
    
    return 0;
}

