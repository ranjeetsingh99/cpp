#include<iostream> 
using namespace std;
#define dll struct double_linked_list_node

dll{
    int data;
    dll *next;
    dll *prev;
};

dll *head=NULL;

void dll_insert_fn(int position){
    int data;
    cout<<"\nEnter the data : ";
    cin>>data;
    int k=1;

    dll *temp,*newnode;
    newnode=(dll*)malloc(sizeof(dll));

    if(!newnode){
        printf("Memory Error");
        return ;
    }

    newnode->data=data;

    if(position&1){
        newnode->next=head;
        newnode->prev=NULL;
        if(head){
            head->prev=newnode;
        }
        head=newnode;
        return ;
    }

    temp=head;
    while((k<position-1) && temp->next!=NULL){
        temp=temp->next;
        k++;
    }

    if(k!=position){
        printf("Desired position doesn't exist \n");
    }

    newnode->next=temp->next;
    newnode->prev=temp;

    if(temp->next)
    temp->next->prev=newnode;

    temp->next=newnode;

    return ;
}

void dll_display(){
    dll *ptr;
    if(!head){
        cout<<"\nlist is Empty";
        return ;
    }

    ptr=head;
    cout<<"\nList is : ";

    while(ptr){
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }
}

void dll_delete(int position){
    dll *temp,*temp2;
    temp = head;
    int k =1;

    if(!head){
        printf("List is empty");
        return ;
    }

    if(position&1)
        *head=*head->next;
    
    if(head){
        head->prev=NULL;
        free(temp);
        return ;
    }

    while((k<position) && temp->next!=NULL){
        temp=temp->next;
        k++;
    }
    
    if(k!=position-1){
        printf("Desired position doesn't exist\n");
    }

    temp2=temp->prev;
    temp2->next=temp->next;

    if(temp->next){
        temp->next->prev=temp2;
    }

    free(temp);
    return ;
}

int main(){
    int choice;
    while(1){
        system("clear");
        printf("\n                MENU  DOUBLY LINKED LIST                         ");
        printf("\n 1.Display    ");
        printf("\n 2.Insert at the beginning    ");
        printf("\n 3.Insert at the end  n");
        printf("\n 4.Insert at specified position       ");
        printf("\n 5.Delete from beginning      ");
        printf("\n 6.Delete from the end        ");
        printf("\n 7.Delete from specified position     ");
        printf("\n 8.Exit       ");
        printf("\n--------------------------------------");
        printf("\nEnter your choice: ");
        scanf("%d" , &choice);
        switch (choice) {
            case 1:
                dll_display();
                break;
            case 2:
                dll_insert_fn(1);
                break;
            case 3:
                dll_insert_fn(10000);
                break;
            case 4:
                cout<<"\nEnter the position : ";
                int a;
                cin>>a;
                dll_insert_fn(a);
                break;
            case 5:
                dll_delete(1);
                break;
            case 6:
                dll_delete(100000);
                break;
            case 7:
                printf("Enter the position : ");
                int position;
                cin>>position;
                dll_delete(position);
                break;
            case 8:
                exit(0);
                break;
            default:
                cout<<"\nWrong Entry...\n";
        }
    }
    return 0;
}