/*Write a program to implement the Stack with the following elements
[234, 8,56,78,90,45,78,100,109] and display the element present at the top of the stack after deleting the element 78.*/


#include<iostream>

using namespace std;

int main(){
    int n,*a,ptr;
    cout<<"Enter Stack Size: ";
    cin>>n;
    a=new int[n];
    ptr=n;
    int c=0;
    while(c!=6){
        //if(ptr==0)
        cout<<"Choose\n";
        cout<<"1. Push     2. Pop     3.Peek     4.Is_Empty     5.Is_Full     6.Exit     :";
        cin>>c;
        if(c==1){
            if(ptr>0){
                ptr--;
                cout<<"Enter Value: ";
                cin>>a[ptr];

                
            }
            else
                cout<<"STACK IS FULL!!!\n";
            
        }
        else if(c==2){
            if(ptr<n)
                ptr++;
            else 
                cout<<"STACK IS EMPTY!!!\n";

        }
         
        else if(c==3){
            cout<<"Top Value :"<<a[ptr]<<endl;
        }
           
        else if(c==4){
            if(ptr==n)
               cout<<"TRUE";
            else 
                cout<<"FALSE";
        cout<<endl; 
        }
        else if(c==5){
            if(ptr==0)
                cout<<"TRUE";
            else   
                cout<<"FALSE";
            cout<<endl;
        }
               
    } 
    return 0;
}
