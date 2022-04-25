#include<iostream>
using namespace std;
#define array struct array
array {
    int total_size;
    int used_size;
    int* ptr;
};
void createArray(array* a , int tsize , int usize) {
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int*)malloc(tsize * sizeof(int));
}

void show (array *a){
    for(int i=0;i<a->used_size;i++){
        cout<<a->ptr[i]<<" ";
    }
}
void setVal(array *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        printf("Enter element %d : ",i);
        cin>>n;
        (a->ptr)[i]=n;
    }
}

int main() {
    array marks;
    createArray(&marks,10,2);
    printf("We are running setVal now\n");
    setVal(&marks);

    printf("We are running show now \n");
    show(&marks);
    return 0;
}