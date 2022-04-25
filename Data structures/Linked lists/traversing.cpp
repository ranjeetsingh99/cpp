#include<iostream>
using  namespace std;
#define list struct listnode
list{
    int data;
    list *next;
};
int listLenght(list *head){
    list *current=head;
    int count=0;
    while(current != NULL){
        count++;
        current= current->next;
    }
    return count;
}
int main(){
    list a;

    return 0;
}