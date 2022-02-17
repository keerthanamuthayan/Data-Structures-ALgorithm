#include<stdio.h>
struct node {
    int data;
    struct node *next;
}
struct node *head;
struct node *first = NULL;
struct node *second = NULL;
struct node *third = NULL;
first = malloc(sizeof(struct node));
second = malloc(sizeof(struct node));
third = malloc(sizeof(struct node));
first->data = 1;
second->data = 2;
third->data = 3;
first->next = second;
second->next = third;
third->next = first;
head = first;