#include<iostream>
using namespace std;
#define list struct listNode

#define tempallocate temp=(list *)malloc(sizeof(list));

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();


list{
    int data;
    list* next;
};

list* start = NULL;

int  main() {
    int choice;
    while (1) {
        system("clear");
        printf("\n              MENU  SINGLE LINKED LIST                           ");
        printf("\n 1.Create     ");
        printf("\n 2.Display    ");
        printf("\n 3.Insert at the beginning    ");
        printf("\n 4.Insert at the end  n");
        printf("\n 5.Insert at specified position       ");
        printf("\n 6.Delete from beginning      ");
        printf("\n 7.Delete from the end        ");
        printf("\n 8.Delete from specified position     ");
        printf("\n 9.Exit       ");
        printf("\n--------------------------------------");
        printf("Enter your choice: ");
        scanf("%d" , &choice);
        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert_begin();
                break;
            case 4:
                insert_end();
                break;
            case 5:
                insert_pos();
                break;
            case 6:
                delete_begin();
                break;
            case 7:
                delete_end();
                break;
            case 8:
                delete_pos();
                break;

            case 9:
                exit(0);
                break;

            default:
                printf("n Wrong Choice:n");
                break;
        }
        getchar();
    }
    return 0;
}

void create(){
    list* temp,*ptr;
    temp=(list *) malloc(sizeof(list));
    if(!temp){
        printf("Memory Error");
        return ;
    }
    printf("\nEnter the data:   ");
    cin>>temp->data;
    temp->next=NULL;
    if(!start)
        start=temp;
    else    {
        ptr=start;
        while(ptr->next)
            ptr=ptr->next;
        
        ptr->next=temp;
    }
}

void display(){
    list *ptr;
    if(!start){
        cout<<"\nList is empty";
        return;
    }
    else{
        ptr=start;
        cout<<"\nList is: ";
        while(ptr){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}

void insert_begin(){
    list *temp;
    temp=(list *) malloc(sizeof(list));
    if(!temp){
        cout<<"Out of Memory Space..."<<endl;
        return;
    }
    printf("\nEnter the data:   ");
    cin>>temp->data;

    temp->next=start;
    if(!start)
        start=temp;
    else {
        temp->next=start;
        start=temp;
    }
}

void insert_end(){
    list *temp,*ptr;
    tempallocate
    if(!temp){
        cout<<"Out of Memory Space..."<<endl;
        return;
    }
    printf("\nEnter the data:   ");
    cin>>temp->data;
    temp->next=NULL;

    if(!start)
        start=temp;
    else{
        ptr=start;
        while(ptr->next)
            ptr=ptr->next;
        ptr->next=temp;
    }    
}

void insert_pos(){
    list *temp,*ptr;
    int i,pos;
    tempallocate
    if(!temp){
        cout<<"Out of Memory Space..."<<endl;
        return;
    }
    cout<<"\nEnter the position for the new data : ";
    cin>>pos;
    cout<<"\nEnter the data :";
    cin>>temp->data;
    if(!pos){
        temp->next=start;
        start=temp;
    }
    else{
        for(i=0,ptr=start;i<pos-1;i++){
            ptr=ptr->next;
            if(!ptr){
                cout<<"Position not found...";
                return ;
            }
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
}

void delete_begin(){
    list *ptr;
    if(!start){
        printf("\nList is Empty...");
        return ;
    }
    else{
        ptr=start;
        start=start->next;
        printf("\nThe deleted Element : %d ",ptr->data);
        free(ptr);
    }
}

void delete_end(){
    list *temp,*ptr;
    
    if(!start){
        printf("\nlist is Empty...");
        return ;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL){
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        cout<<"\nThe deleted Element : "<<ptr->data;
        free(ptr);
    }
}

void delete_pos(){
    int i,pos;
    list *temp,*ptr;
    if(!start){
        printf("The list is already Empty...");
        exit (0);
    }
    else{
        printf("Enter the position of Element to be deleted :   ");
        cin>>pos;

        if(!pos){
            ptr=start;
            start=start->next;
            printf("\nThe deleted element : %d",ptr->data);
            free(ptr);
        }
        else{
            ptr=start;
            for(i=0;i<pos;i++){
                temp=ptr;
                ptr=ptr->next;
                if(!ptr){
                    printf("\nPosition not found...");
                    return;
                }
            }
            temp->next=ptr->next;
            printf("\nThe deleted element is : %d",ptr->data);
            free(ptr);
            }
        }
    }
