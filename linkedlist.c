#include <stdio.h>
struct node {
  int price;
  struct node *next;
};
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->price);
    p = p->next;
  }
}

int main() {
  struct node *head;
  struct node *first = NULL;
  struct node *second = NULL;
  struct node *third = NULL;
  first = malloc(sizeof(struct node));
  second = malloc(sizeof(struct node));
  third = malloc(sizeof(struct node));
  first->price = 1;
  second->price = 2;
  third->price = 3;
  first->next = second;
  second->next = third;
  third->next = NULL;
  head = first;
  printLinkedlist(head);
}