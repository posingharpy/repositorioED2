#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

bool compara(void *data1, void *data2)
{
    int *d1 = (int*)data1;
    int *d2 = (int*)data2;

    return (*d1==*d2)?true:false;
}

int x=0;
int main()
{   

    LinkedList list;
    init(&list);

    int *aux = (int *)malloc(sizeof(int));
    *aux=1;
    push(&list, aux);
    aux = (int *)malloc(sizeof(int));
    *aux=2;
    push(&list, aux);
    aux = (int *)malloc(sizeof(int));
    *aux=3;
    push(&list, aux);

    printf("primeiro elemento: %d\n",*((int*)first(&list)));
    printf("posiçao do primeiro elemento: %d\n",indexOf(&list,aux,compara));
    printf("retornando os dados do no: %d\n",*((int*)getPos(&list,2)));
    printf("retornando o endereço do no: %p\n",(Node*)getNodeByPos(&list,2));
    printf("inicio: %d\n", list.size);
    dequeueall(&list);
    printf("limpando a lista\n");
    printf("fim: %d\n", list.size);
    //printf("removendo o primeiro elemento:%d\n",*((int*)dequeuea(&list)));
    //printf("removendo o segunso elemento: %d\n",*((int*)dequeue(&list)));
    //printf("removendo o terceiro elemento: %d\n",*((int*)dequeue(&list)));


    
    return EXIT_SUCCESS;
}