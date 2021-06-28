#include <iostream>
#include <cstdlib>
using namespace std;
struct node {
   int data;
   struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
void Insert() {
   int val;
   cout<<"Value : ";
   cin>>val;
   if (rear == NULL) {
      rear = (struct node *)malloc(sizeof(struct node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
   } else {
      temp=(struct node *)malloc(sizeof(struct node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }
}
void Delete() {
   temp = front;
   if (front == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else
   if (temp->next != NULL) {
      temp = temp->next;
      cout<<"Element deleted : "<<front->data<<endl;
      free(front);
      front = temp;
   } else {
      cout<<"Element deleted : "<<front->data<<endl;
      free(front);
      front = NULL;
      rear = NULL;
   }
}
void Display() {
   temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
int main() {
    int ch;
    do{
        cout<<"1) Insert     2) Delete     3) Display     4) Exit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch) {
            case 1: Insert();
                    break;
            case 2: Delete();
                    break;
            case 3: Display();
                    break;
            case 4: cout<<"Exit"<<endl;
                    break;
            default: cout<<"Invalid choice"<<endl;
        }
    } while(ch!=4);
   return 0;
}