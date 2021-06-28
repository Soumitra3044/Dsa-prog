#include <iostream>

using namespace std;

struct Node{
    int val;
    Node *next;
} *top,*temp,*ptr,*newptr;

Node *create_node(){
	int val;
	cout<<"Enter value: ";
	cin>>val;
	ptr= new Node;
	ptr->val=val;
	ptr->next=NULL;
	return ptr;
}

void push(Node *np){
    if(top==NULL){
		top=np;
	}
	else{		
		np->next=top;
		top=np;
	}

}

void pop(){
    if(top==NULL){
		cout<<"STACK IS EMPTY!!!\n";
	}
	else{		
		temp=top;
		top=temp->next;
		delete temp;
    }
}

void peek(){
    if(top==NULL){
        cout<<"STACK IS EMPTY!!!\n";
    }
    else
    cout<<"value: "<<top->val<<endl;
}

void isempty(){
    if(top==NULL)
        cout<<"TRUE";
    else
        cout<<"FALSE";
    cout<<endl;
    
}   

void show_node(){
	if(top==NULL){
		cout<<"STACK IS EMPTY!!!\n";
	}
	else{
		temp=top;
		while(temp!=NULL){
			cout<<temp->val<<"->";
			temp=temp->next;
		}
		cout<<"NULL";
	}
	cout<<endl;
}


int main(){
    int c=0;
    while(c!=6){
        cout<<"Choose\n";
        cout<<"1. Push     2. Pop     3.Peek     4.isempty     5.Show     6.Exit     :";
        cin>>c;
        if(c==1){
            newptr=create_node();
            push(newptr);
        }
        else if(c==2){
            pop();
        }
        else if(c==3){
            peek();
        }
        else if(c==4){
            isempty();
        }
        else if(c==5){
            show_node();
        }
        cout<<endl;
    }
    return 0;
}