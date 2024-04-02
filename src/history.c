#include <stdio.h>
#include <stdlib.h>
#include "hisotry.h"

/*Initialize the linked list to keep the history. */
List* init_history() {
  List *list = malloc(sizeof(List));
  list->root = malloc(sizeof(Item));
  return list;
}

/* Add a history item to the end of the list.
   List* list - the linked list
   chhar* str - the tring to store
*/
void add_history(List *list, char *str) {
  Item *current = list->root;
  int id = 1;
  while (current->next != NULL) {
    current = current->next;
    id++;
  }
  current->str = str;
  current->id = id;
}

/* Retrieve the string stored in the node where Item->id == id.
   List* list - the linked list
   int id - the id of the Item to find
*/
char *get_history(List *list, char *str) {
  Item *current = list-> root;
  while (current != NULL) {
    if (current->id == id) {
      return current->str;
    }
    current = current->next;
  }
  return;
}

/* Print the entire contents of the list. */
void print_history(List *list) {
  Item *current = list->root;
  while (current != NULL) {
    printf("%d, %s", current->id, current->str);
    current = current->next;
  }
  printf("\n");
}

/* Free the history list and the strings it references. */
void free_history(List *list) {
  Item *current = list->root;
  Item *next_item;
  while (current != NULL) {
    next_item = current->next;
    free(current);
    current = next_item;
  }
  list->root = NULL;
}
