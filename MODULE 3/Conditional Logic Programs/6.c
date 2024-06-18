#include <stdio.h>

int main() {
    char v;
    
    printf("Enter a character: ");
    scanf(" %c", &v); 
    
    if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' || v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U') {
        printf("The character %c is a vowel.\n",v);
    } else {
        printf("The character %c is Not a vowel.\n", v);
    }
    
    return 0;
}

