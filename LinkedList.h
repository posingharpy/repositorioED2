#ifndef DataStructure_LinkedList_h
#define DataStructure_LinkedList_h
#include <stdbool.h>

typedef struct Node
{
    void *data;
    struct Node *next;
}Node;

typedef struct LinckedList
{
    Node *first;
    int size;
}LinckedList;

typedef bool (*compare)(void*,void*);

void init(LinckedList *list);
int enqueue(LinckedList *list, void *data);
void* dequeue(LinckedList *list);
void* first(LinckedList *list);
void* last(LinckedList *list);
int push(LinckedList *list, void *data);
void* pop(LinckedList *list);
void* top(LinckedList *list);
bool isEmpty(LinckedList *list);
int indexOF(LinckedList *list, void *data, compare equal);
void* getPos(LinckedList *list, int pos);
Node* getNodeByPos(LinckedList *list, int pos);
int add(LinckedList *list, int pos, void *data);
int addAll(LinckedList *listDest, int pos, LinckedList *listSource);
void* removePos(LinckedList *list, int pos);
bool removeData(LinckedList *list, void *data, compare equal);