#include <stdio.h>

typedef enum 
{
    IT,
    MECH,
    CIVIL,
    PHARM,
}T_type;

typedef struct
{
    char fname[10];
    char lname[10];
    int id;
    T_type type;
}Entry;

char* str_cpy(char* src,char* dest);

int main()
{
    Entry one;

    str_cpy("manilal",one.fname);
    str_cpy("gujar",one.lname);

    printf("%s",one.fname);
    printf(" %s\n",one.lname);

    return 0;
}

char* str_cpy(char* src,char* dest)
{
    char* p =  dest;

    while(*src != '\0')
    {
        *p++ = *src++;
    }

    *p = '\0';

    return src;
}

