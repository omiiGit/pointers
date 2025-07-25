#include <stdio.h>

int main()
{
    int a = 10;
    void* v = &a;

    printf("%d\n",sizeof(v));

    return 0;
}
