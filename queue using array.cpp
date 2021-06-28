#include <iostream>

using namespace std;

int ptr=0,arr[100];

void insert(){
    cout<<"Value :";
    cin>>arr[ptr];
    ptr++;
}

void delete_node(){
    if(ptr==0){
        cout<<"UNDERFLOW!!\n";
    }
    else{
        cout<<"Deleted element :"<<arr[0]<<endl;
        for(int i=0;i<ptr;i++){
            arr[i]=arr[i+1];
        
    }
    ptr--;    
    }  
}

void show(){
    cout<<"Element :";
    if(ptr==0){
        cout<<"EMPTY\n";
        return;
    }
    for(int i=0;i<ptr;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=0;
    while(n!=4){
        cout<<"1) Insert     2) Delete     3) Display     4) Exit\n";
        cout<<"Enter your choice : ";
        cin>>n;
        if(n==1){
            insert();
        }
        else if(n==2){
            delete_node();
        }
        else if(n==3){
            show();
        }

    }
    return 0;
}