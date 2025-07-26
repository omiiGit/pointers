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
void show_name(Entry* obj);

int main()
{
    Entry one;
    Entry* onep = &one; 

    str_cpy("manilal",one.fname);
    str_cpy("gujar",one.lname);

    one.id = 909;

    show_name(onep);
    show_name(onep);

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

void show_name(Entry* obj)
{
    printf("%s %s\n",(*obj).fname,obj->lname);
    printf("id=%d\n",obj->id);
}
