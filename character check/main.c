//
//  main.c
//  character check
//
//  Created by Chetna Soni on 12/12/20.
//

#include <stdio.h>


int main()
{
   char ch;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    lowercase_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (lowercase_vowel || uppercase_vowel)
            printf("%c is a vowel", ch);
        else
            printf("%c is a consonant", ch);
       
        
        printf(" %c is a letter\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit\n", ch);
    }
    else
    {
        printf("%c is a special character\n", ch);
    }
    
    
    return 0;
}
