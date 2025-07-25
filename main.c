#include <stdio.h>

int main()
{
    int k = 10;
    int j = 12;

    int* k_p = &k;

    printf("in variable k %d is value and it stored in %p\n",k,(void*)&k);
    printf("in variable j %d is value and it stored in %p\n",j,(void*)&j);

    printf("in variable k_p %p is value and it stored in %p\n",k_p,(void*)&k_p);
    printf("in variable k_p %p is value and value (address) have %d value\n",k_p,*k_p);

}
