#include<iostream>
using namespace std;
#define list struct list_node
list{
    int data;
    list *next;
};

list add_beg(list* head,int data){
    list *ptr=(list*)malloc(sizeof(list));
    ptr->data=data;
    ptr->next=head;
    head =ptr;
    return head;
}

int main(){
    list *head=(list*)malloc(sizeof(list));
    head->data=1;
    head->next=NULL;

    list *ptr=(list*)malloc(sizeof(list));
    ptr->data=8;
    ptr->next=NULL;
    head->next=ptr;

    head=add_beg(head,100);
    ptr=head;
    while(ptr!=NULL)   {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
    return 0;
}