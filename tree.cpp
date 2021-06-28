#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *right;
    struct node *left;
}
struct node *tree=NULL;
struct node *insert(struct node *,int n);



struct node *insert(struct node *tree, int num)
{
    struct node *ptr,*parentptr,*nodeptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=num;
    ptr->left=NULL;
    ptr->right=NULL;
    if(tree==NULL)
    {
        tree=ptr;
        
    }
    else
    {
        parentptr=NULL;
        nodeptr=tree;
        while(nodeptr!=NULL)
        
        
    }
    return tree;
}

