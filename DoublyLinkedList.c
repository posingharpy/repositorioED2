#include <stdlib.h>
#include <stdio.h>
#include "DoublyLinkedList.h"

void init(DoublyLinkedList *list)
{
    Node *trashNode = (Node*)malloc(sizeof(Node))
    trashNode->data=NULL;
    trashNode->previous=trashNode;
    trashNode->next=trashNode;
    list->first=trashNode;
    list->size=0;
}

int enqueue(DoublyLinkedList *list, void *data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode==NULL) return -1;
    newNode->data = data;
    newNode->next = list->first;
    newNode->previous = list->first->previous;
}