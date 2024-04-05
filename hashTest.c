#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

typedef struct Client{
    char nome[50];
    char email[50];
}Client;

bool comparaChaves(void *key, void *data)
{
    char *chave=(char*)key;
    Client *c=(Client*)data;
    return (strcmp(chave, c->email)==0)?true:false;
}

void printClient(void *data)
{
    Client *client=(Client*)data;
    printf("{%s, %s} - ", client->nome, client->email);
}

int main()
{
    HashStruct hashes;
    initHash(&hashes);
    printf("%d\n", hash("anthony@gmail.com"));
    Client *c=(Client *)malloc(sizeof(Client));
    strcpy(c->nome, "Anthony");
    strcpy(c->email, "anthony@gmail.com");
    printf("%d\n",hash(c->email));
    put(&hashes, c->email, c, comparaChaves);
    printf("%d\n",hashes.hashes[hash("anthony@gmail.com")].size);
    printf("%d\n",hashes.size);
    printf("%d\n",containsKey(&hashes, "anthony@gmail.com", comparaChaves));
    Client *cliente = (Client*)get(&hashes, "anthony@gmail.com", comparaChaves);
    printf("%s\n",cliente->nome);
    c = (Client *)malloc(sizeof(Client));
    strcpy(c->nome,"Maria") ;
    strcpy(c->email,"maria@email.br");
    put(&hashes, c->email, c, comparaChaves);
    c = (Client *)malloc(sizeof(Client));
    strcpy(c->nome,"Pedro") ;
    strcpy(c->email,"pedro@email.com.br");
    put(&hashes, c->email, c, comparaChaves);
    c = (Client *)malloc(sizeof(Client));
    strcpy(c->nome,"Carla") ;
    strcpy(c->email,"carla@gmail.com.br");
    put(&hashes, c->email, c, comparaChaves);
    c = (Client *)malloc(sizeof(Client));
    strcpy(c->nome,"Anthony") ;
    strcpy(c->email,"anthony@gmail.com");
    put(&hashes, c->email, c, comparaChaves);
    showHash(&hashes, printClient);
    return 0;
}