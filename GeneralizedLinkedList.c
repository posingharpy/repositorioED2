#include <stdlib.h>
#include <stdio.h>
#include "GeneralizedLinkedList.h"

int addAtom(Node **list, int atom)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode==NULL) return -1;
    newNode->type = 0;
    newNode->atomList.atom = atom;
    newNode->next = NULL;
    return 1;
}

int addList(Node **list, Node **subList)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode==NULL) return -1;
    newNode->type = 1;
    newNode->atomList.list = *subList;
    newNode->next = NULL;
    return 1;
}



