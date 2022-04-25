#include<iostream>
using namespace std;
#define list struct listnode
list{
    int data;
    list *next;
};

int main(){
    list *head=NULL;
    head = (list*)malloc(sizeof(list));
    head->data = 1;
    head->next = NULL;
    printf("%d\n",head->data);
    return 0;
}