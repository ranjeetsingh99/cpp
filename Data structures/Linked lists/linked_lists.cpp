#include<iostream>
using namespace std;
#define list struct list_node

list{
    int data;
    list *next;
};

void insertList(list** head,int data,int position){
    int k=1;
    list *p,*q,*newNode;
    newNode=(list *) malloc(sizeof(list));
    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->data=data;
    p=*head;
    if(position == 1){
        newNode->next=p;
        *head=newNode;

    }
    else{
        while(p!=NULL && k<position){
            k++;
            q=p;
            p=p->next;
        }
        q->next=newNode;
        newNode->next=p;
    }


}

void print(list** head){
    list *p;
    p=*head;
    while(p!=NULL){
        printf("%d  ",p->data);
        p=p->next;
    }
    
}



int main(){
    list* head;
    head=(list*)malloc(sizeof(list));
    head->data=1;
    head->next=NULL;

    insertList(&head,3232,2);

    return 0;
}