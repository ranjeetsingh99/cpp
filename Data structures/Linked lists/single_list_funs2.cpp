#include<iostream>
using namespace std;
#define list struct list_node

list{
    int data;
    list* next;
};

list* head = NULL;

void insert_link_node(int position) {
    list* newnode , * ptr=head,*temp;
    newnode=(list*)malloc(sizeof(list));
    if(!newnode){
        cout<<"Memory Error.";
        return ;
    }
    cout<<"Enter the data : ";
    cin>>newnode->data;
    
    if(position&1){
        newnode->next=ptr;
        head=newnode;
        return ;
    }
    int k=1;
    while(ptr && k<position){
        k++;
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=newnode;
    newnode->next=ptr;
}

void delete_link_node(int position){

    if(!head){
        cout<<"\nList is Empty";
        return ;
    }

    if(position&1){
        head=head->next;
        return ;
    }

    int k=1;
    list *ptr=head,*temp;
    while(ptr->next && k<position){
        k++;
        temp=ptr;
        ptr=ptr->next;
    }
    if(ptr==NULL)
        printf("\nPosition does not exist.");
    else{
        temp->next=ptr->next;
        free(ptr);
    }
}

void display_list(){
    if(!head){
        cout<<"\nList is Empty.";
        return ;
    }
    list *ptr=head;
    while(ptr){
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }
}


int main() {
    int choice;
    while (1) {
        system("clear");
        cout << "\n1.Display" << endl;
        cout << "2.Insert at the beginning" << endl;
        cout << "3.Insert at the end" << endl;
        cout << "4.Insert at the specified position" << endl;
        cout << "5.Delete from beginning" << endl;
        cout << "6.Delete from the end" << endl;
        cout << "7.Delete from the specified position" << endl;
        cout << "8.Exit" << endl;
        cout << "............................................" << endl;
        cout << "Enter the choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            display_list();
            break;
        case 2:
            insert_link_node(1);
            break;
        case 3:
            insert_link_node(10000);
            break;
        case 4:
            {cout<<"Enter the position : ";
            int a;
            cin>>a;
            insert_link_node(a);
            }break;
        case 5:
            delete_link_node(1);
            break;
        case 6:
            delete_link_node(1000);
            break;
        case 7:{
            cout<<"Enter the position: ";
            int a;
            cin>>a;
            delete_link_node(a);}
            break;
        case 8:
            exit(1);
            break;
        default:
            cout<<"wrong key."<<endl;
            break;
        }
        getchar();
    }
    return 0;
}