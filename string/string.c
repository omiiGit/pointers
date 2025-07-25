#include <stdio.h>

#define SIZE 30

char A[SIZE] = "Hello man"; 
char B[SIZE] = "This is string of man";
char C[SIZE] = "hola";

char* myStrcpy(const char* source,char* destination);
char* upperCase(char* source);

int main()
{
   char* cp = C; 

   puts(cp);
   putchar('\n');

   upperCase(cp);

   puts(cp);
   putchar('\n');
}

char* myStrcpy(const char* source,char* destination)
{

    char* p = destination;

    while(*source != '\0')
    {
        *p++ = *source++;
    }
    *p = '\0';

    return destination;
}

char* upperCase(char* source)
{
    char* first_char = source;

    if(*first_char >= 'a' || *first_char <= 'z')
    {
        *first_char = *first_char - 32;
    }
    
    return source;

}
