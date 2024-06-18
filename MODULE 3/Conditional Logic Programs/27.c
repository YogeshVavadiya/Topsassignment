
#include <stdio.h>

int main()
{

    char week;

    printf("Enter Character : ");
    scanf("%c", &week);

    switch(week)
    {
        case 'A':
        case 'a':
        case 'E':
       	case 'e':
   		case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        printf("%c is Vowel \n",week);
            break;
        default: 
        printf("%c is Consonant",week);
    }
    return 0;
}


