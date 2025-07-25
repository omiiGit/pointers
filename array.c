#include <stdio.h>

#define SIZE 5

int array[] = {1,2,3,4,5};
//int* a_p = &(array[0]);

int main()
{
    int temp = 0;
    int* t_p = &temp;
    int* p = (int*)0x5619e4689030;
    //*p = 10;
    

    for(int i = 0;i < SIZE;i++)
    {
        printf("%p  array[%d]=%d\n",&(array[i]),i,array[i]);
    }
    printf("\n----------------\n");

    int* a_p = array;

    for(int i = 0;i < SIZE;i++)
    {
        printf("%p + %d=%d\n",a_p,i,*a_p);
        
        a_p += 1;

    }

    printf("\nCUSTOM POINTER: %p-%d\n",p,(int)*p);
   
    return 0;
}
