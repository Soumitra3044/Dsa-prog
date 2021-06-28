#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *tree=NULL;
struct node *insert(struct node *,int n);
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);
int main()
{
    int option;
    do
    {
        cout<<"1-Insert element\n";
        cout<<"2-Preorder transversal\n";
        cout<<"3-Inorder transversal\n";
        cout<<"4-Postorder transversal\n";
        cout<<"Enter option\n";
        cin>>option;
        switch(option)
        {
            case 1:
            int val;
            cout<<"Enter value";
            cin>>val;
            tree=insert(tree,val);
            cout<<"\n";
            break;
            
            case 2:
            preorder(tree);
            cout<<"\n";
            break;
             case 3:
            inorder(tree);
            cout<<"\n";
            break;
            case 4:
            postorder(tree);
            cout<<"\n";
            break;
        }
        
    }while(option!=5);

};
struct node *insert(struct node *tree, int val)
{
    struct node *ptr,*parentptr,*nodeptr;
    ptr=new node;
    ptr->data=val;
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
        {
            parentptr=nodeptr;
            if(val<nodeptr->data)
            nodeptr=nodeptr->left;
            else
            nodeptr=nodeptr->right;
        }
        if(val<parentptr->data)
            parentptr->left=ptr;
            else
            parentptr->right=ptr;
    }
    return tree;
};
void preorder(struct node *tree)
{
    
    if(tree!=NULL)
    {
        cout<<tree->data<<"\t";
        preorder(tree->left);
        preorder(tree->right);
    }
};
void inorder(struct node *tree)
{
     if(tree!=NULL)
    {
       
        inorder(tree->left);
        cout<<tree->data<<"\t";
        inorder(tree->right);
    }
    
};
void postorder(struct node *tree)
{
    if(tree!=NULL)
    {
        
        postorder(tree->left);
        postorder(tree->right);
        cout<<tree->data<<"\t";
    }
};

