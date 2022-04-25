#include<iostream>
using namespace std;
#define list struct listnode

list {
    int data;
    list *next;
};

int count(list *head){
    int count = 0;
    while(head != NULL){
        count++;
        head =head->next;
    }
    return count;
}

void print(list *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    
}

void add_at_begin(list *head,int data){
    list *newnode=(list*)malloc(sizeof(list));
    newnode->data=data;
    newnode->
}

void add_at_end(list *head,int data){
    list *newnode,*ptr=head;
    newnode = (list*)malloc(sizeof(list));
    newnode->data = data;
    newnode->next = NULL;

    while(ptr->next != NULL){
        ptr=ptr->next;
    }
    ptr->next = newnode;
}


int main(){
    list *head=NULL;
    head=(list*)malloc(sizeof(list));
    head->data=1;
  //  head->next =(list*)malloc(sizeof(list));
  //  head->next->data=2;
  //  head->next->next=(list*)malloc(sizeof(list));
  //  head->next->next->data=3;
  //  head->next->next->next=NULL;
  //  printf("%d\n",head->data);
  //  printf("%d\n",head->next->data);
  //  printf("%d\n",head->next->next->data);
    //print(head);
    //printf("%d\n",count(head));
    add_at_end(head,2);
    add_at_end(head,3);
    print(head);
    printf("%d\n",count(head));
    return 0;
}