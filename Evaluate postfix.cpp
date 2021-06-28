#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Node{
    int val;
    Node *next;
} *top,*temp,*ptr,*newptr;

Node *create_node(int val){
	//int val;
	//cout<<"Enter value: ";
	//cin>>val;
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

int pop(){
    int t;
    if(top==NULL){
		cout<<"STACK IS EMPTY!!!\n";
	}
	else{		
		temp=top;
        t=temp->val;
		top=temp->next;
        
		delete temp;
    }
    return t;
}

void peek(){
    if(top==NULL){
        cout<<"STACK IS EMPTY!!!\n";
    }
    else
    cout<<"value: "<<top->val<<endl;
}




int main(){
    string s;
    int a,b,sum;
    cout<<"Input postfix:";
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            newptr=create_node((int)(s[i]-48));
            push(newptr);
        }
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){ 
            b=pop();
            a=pop();
            switch(s[i]){
                case '+':{
                    sum=a+b;
                    break;
                }
                 case '-':{
                    sum=a-b;
                    break;
                }
                case '*':{
                    sum=a*b;
                    break;
                }
                case '/':{
                    sum=a/b;
                    break;
                }
            }
            newptr=create_node(sum);
            push(newptr);    
        }
    }
peek();
}