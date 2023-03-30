#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  ArrayList* List = (ArrayList*) malloc(sizeof(ArrayList));

  List -> capacity = 2;
  List -> size = 0;

  List -> data = (void **) malloc(List -> capacity *sizeof(void*));
  return List;
}

void append(ArrayList * l, void * data){
  if(l -> size == l -> capacity){
    l -> data = realloc(l -> data, l -> capacity *sizeof(void*));
    l -> capacity *= 2;
  }
  
  l-> data[l -> size] = data;
  l-> size++;
}

void push(ArrayList * l, void * data, int i){
  if(i == l -> size){
    return;
  }
  if(l -> size == l -> capacity){
    l -> data = realloc(l -> data, l -> capacity *sizeof(void*));
    l -> capacity *= 2;
  }for(int j = 0 ; j < l -> capacity ; j++){
      l -> data[j] = l -> data[j-1];
    }
  l -> data[i]  = data;
}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
