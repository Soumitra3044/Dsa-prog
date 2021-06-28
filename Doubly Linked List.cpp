#include <iostream>
using namespace std;

struct Node{int val;
			Node *next;
            Node *prev;
} *start,*ptr,*temp,*newptr;

Node *create_node(){
	int val;
	cout<<"Enter value: ";
	cin>>val;
	ptr= new Node;
	ptr->val=val;
	ptr->next=NULL;
    ptr->prev=NULL;
	return ptr;
}

void insert_node(Node *np, int location){
	if(start==NULL){
		start=np;
        np->prev=NULL;

	}
	else{
		if(location==0){
			np->next=start;
            start->prev=np;
        	start=np;
		}
		else{
            Node *temp1;
			temp=start;
		    for(int i=1;i<location;i++){
			    if(temp->next!=NULL)
				    temp=temp->next;
			    else
				    break;
		    }
            if(temp->next==NULL){
                temp->next=np;
                np->prev=temp;

            }
            else{
                temp1=temp->next;
                np->next=temp->next;
                np->prev=temp1->prev;
                temp1->prev=np;
                temp->next=np;
            }		
		}
	}
}

void show_node(){
	if(start==NULL){
		cout<<"UNDERFLOW!!!\n";
	}
	else{
		temp=start;
        cout<<"START <-> ";
		while(temp!=NULL){
			cout<<temp->val<<" <-> ";
			temp=temp->next;
		}
		cout<<"NULL";
	}
	cout<<endl;
}

void delete_node(int location){
	Node *t1;
	if(start==NULL){
		cout<<"UNDERFLOW!!!\n";
	}
	else{
		if(location==0){
			temp=start;
            start=temp->next;
            t1=temp->next;
            t1->prev=NULL;
			delete temp;
		}
		else{
			temp=start;
		    for(int i=0;i<location && temp->next!=NULL;i++)
			    temp=temp->next;
            if(temp->next==NULL){
                t1=temp->prev;
                t1->next=NULL;
                delete temp;
            }
            else{
                Node* t2;
                t1=temp->next;
                t2=temp->prev;
                t1->prev=t2;
                t2->next=t1;
	            //temp->next=t1->next;
	            delete temp;;
            }
                  
		    
		}
	}
    cout<<"DELETED!! \n";
}



int main(){
	int c,l;
	while(c!=5){
		cout<<"Choose\n";
		cout<<"1.Create  2.Delete  3.Show  5.Exit		:";
		cin>>c;
		if(c==1){
			cout<<"Location:";
			cin>>l;
			newptr=create_node();
			insert_node(newptr,l);
		} 
		else if(c==2){
			cout<<"Location:";
			cin>>l;
			delete_node(l);
		}
		else if(c==3){
			show_node();
		}
		else if(c==4){
			cout<<"Enter Value:";
			cin>>l;
			//search(l);
		}
		
	}
	cout<<"EXITED";
	return 0;
}