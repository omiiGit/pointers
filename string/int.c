#include <stdio.h>

#define SIZE 10

int A[10] = {1,2,3,4,5,6,7,8,9,10};
int B[10];

void print_array(int* array,int size);
void int_copy(int** source,int** dest,int size);

int main()
{
    int* a_p = A;
    int* b_p = B;

    //int_copy(&a_p,&b_p,SIZE);
    int_copy(&a_p,&b_p,SIZE);

    print_array(A,SIZE);
    print_array(B,SIZE);

    printf("%d\n",A[3]);
    printf("%d\n\n",B[3]);
    printf("%d\n",a_p[3]);
    printf("%d\n",b_p[3]);

}

void print_array(int* array,int size)
{
    for(int i = 0;i < size;i++)
    {
        printf("%d ",*(array + i));
    }
    printf("\n");
}

void int_copy(int** source,int** dest,int size)
{
    while(size)
    {
      **dest = **source;
      (*dest)++;
      (*source)++;
      size--;
    }
}
