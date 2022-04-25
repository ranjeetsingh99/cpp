#include<iostream>
using namespace std;

#define list struct list_node

list{
    int data;
    list *next;
};

void insertion(list *head,int data,int position){
    int k=1;
    list *p,*q,*newnode;
    newnode=(list*)malloc(sizeof(list));

    if(!newnode){
        printf("\nMemory Error\n");
        return ;
    }
    cout<<1<<endl;
    newnode->data=data;
    
    p=head;
    cout<<1<<endl;

    //insertion in the beginning

    if(position==1){
        newnode->next=p;
        head=newnode;
    }

    else{
        //traverse the list until the position where we want to insert
        while(p!=NULL  && k<position){
            k++;
            q=p;
            p=p->next;
        }
        
        q->next=newnode;
        newnode->next=p;

    }
}
void print(list** head){
    list* ptr;
    ptr->next= *head;
    while(ptr->next!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    
}

void push(list** head,int dta){
    list* new_node=(list*)malloc(sizeof(list));
    new_node->data=dta;
    new_node->next=(*head);
    (*head)=new_node;
}

int main(){
    list* head;
    head = (list*)malloc(sizeof(list));
    if(!head)
        cout<<"Memory Error";
    head->data=1;
    head->next=NULL;
    push(&head,2);
    print(&head);
    return 0;
}