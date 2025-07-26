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

void str_cpy(char* src,char* dest);

int main()
{
    

    return 0;
}
