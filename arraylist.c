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
    l -> capacity *= 2;
    l -> data = realloc(l -> data, l -> capacity *sizeof(void*));
  }
  
  l-> data[l -> size] = data;
  l-> size++;
}

void push(ArrayList * l, void * data, int i){
  if(i > l -> size){
    return;
  }
  if(l -> size == l -> capacity){
    l -> capacity *= 2;
    l -> data = realloc(l -> data, l -> capacity *sizeof(void*));
  }
  
  for(int j = l -> size ; j > i ; j--){
    l -> data[j] = l -> data[j-1];
  }
  l -> data[i]  = data;
  l->size++;
}

void* pop(ArrayList * l, int i){
  if(i >= l -> size){
    return NULL;
  }

  if(i < 0){
    l -> size--;
    return l -> data[l -> size + i];
  }

  for(int j = i ; j < l -> size -1 ; j++){
    l -> data[j] = l -> data[j + 1];  
  }
  
  l-> size--;
  return l -> data[i];
}

void* get(ArrayList * l, int i){
  if(i >= l -> size){
    return NULL;
  }
  
  if( i < 0){
    
    return l -> data[l -> size + i];
  }
  
  return l -> data[i];
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
  l -> capacity = 2;
  l-> size = 0;
  l -> data = realloc(l -> data, l -> capacity * sizeof(void *));
}
