#include <stdio.h>

#define SIZE 50

char a[SIZE] = "abc";
char b[SIZE] = "def";

void print(char* a,char* b);
char* get_string(char* string);
int get_string_len(char* string);
void copy_string(char* src,char* dest);
char* cat_string(char* f,char* s);

int main()
{

    print(a,b);

    cat_string(a,b);

    puts(a);
}


void print(char* a,char* b)
{
    puts("a-");;puts(a); putchar('\n');
    puts("b-");;puts(b); putchar('\n');

}


char* get_string(char* string)
{
    int c;
    char* p = string;

    while((c = getchar()) != '\n')
    {
        *p++ = c;
    }

    return string;
    
}

int get_string_len(char* string)
{
    int len = 0;

    while(*string != '\0')
    {
        len++;
        string++;
    }

    return len;
}

void copy_string(char* src,char* dest)
{
    while(*src != '\0')
    {
        *dest++ = *src++;
    }
}

char* cat_string(char* f,char* s)
{
    int last = get_string_len(f);

    while(*s != '\0')
    {
        *(f+ last++) = *s++;
    }

    *(f + last) = '\0';

    return f;
}
