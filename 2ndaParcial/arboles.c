#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* left_child;
    struct node* right_child;

    int info;
};

struct node* newNode(int data){
    size_t node_size = sizeof(struct node);
    struct node* new_Node = (struct node*) malloc(node_size);
    new_Node -> info = data;
    new_Node -> left_child = NULL;
    new_Node -> right_child = NULL;

    return new_Node;
}

int main(){

}