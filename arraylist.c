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
  if(List -> size == List -> capacity){
    List -> data = realloc(List -> data, List -> capacity *sizeof(void*));
  }
  
}

void push(ArrayList * l, void * data, int i){

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
