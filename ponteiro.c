#include <stdio.h>
#include <stdlib.h>

int main()
{   
    //int x=1;
    int* number=(int*)malloc(sizeof(int));
    *number=7;
    //printf("%p\n", &x);
    printf("%p\n", &number);
    printf("%p\n", number);
    printf("%d\n", *number);
    number++;
    number--;
    printf("%p\n", number);
    printf("%d\n", *number);
    *number=0;
    free(number);
    number=NULL;

    int* numbers=(int*)malloc(sizeof(int)*4);
    *numbers=1;
    *(numbers+1)=2;
    *(numbers+2)=3;
    *(numbers+3)=4;
    for(int i=0; i<4; i++)
    {
        printf("%d", *(numbers+i));
            }
    return EXIT_SUCCESS;
}
