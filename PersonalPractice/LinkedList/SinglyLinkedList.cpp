//Traversing, Searching, Inserting and Deleting from a  Singly Linked List

#include <iostream>
#include <vector>

using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *create(struct node *start){
    struct node *ptr;
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    struct node *newnode = new struct node();
    newnode->data = num;
    
    if(start == NULL){
        newnode->next = NULL;
        start = newnode;
    }else{
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
            ptr->next = newnode;
            newnode->next = NULL;
        }
    }
    return start;
}

struct node *insert_beg(struct node *start){
    struct node *newnode = new struct node();
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    newnode->data = num;
    newnode->next = start;
    start = newnode;

    return start;
}

struct node *insert_after(struct node *start){
    struct node *newnode = new struct node();
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    newnode->data = num;
    cout<<"Enter the value after which the number is to be inserted: "<<endl;
    int val;
    cin>>val;
    struct node *ptr;
    struct node *preptr;
    ptr = start;
    preptr = ptr;

    //Error here infinite loop when displayed after calling this fuction on first element
    

    while(preptr->data != val){
        if(val == start->data){
            newnode->next = start->next;
            start->next = newnode;
            return start;
        }
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = newnode;
    newnode->next = ptr;
    return start; 
}

struct node *insert_end(struct node *start){
    struct node *newnode = new struct node();
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    newnode->data = num;
    struct node *ptr;
    ptr = start;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = newnode;
    newnode->next = NULL;
    return start;
}

struct node *insert_bef(struct node *start){
    struct node *newnode = new struct node();
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    newnode->data = num;
    cout<<"Enter the value before which the number is to be inserted: "<<endl;
    int val;
    cin>>val;
    struct node *ptr;
    struct node *preptr;
    ptr = start;
    preptr = start;

    while(ptr->data != val){
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = newnode;
    newnode->next = ptr;
    return start; 
}

struct node *delete_beg(struct node *start){
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start){
    struct node *ptr, *preptr;
    ptr = start;
    while(ptr->next != NULL){
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = NULL;
    free(ptr);
    return start;
}

struct node *delete_aft(struct node *start){
    cout<<"Enter the value after which the number is to be deleted: "<<endl;
    int val;
    cin>>val;
    struct node *ptr, *preptr;
    ptr = start;

    while(preptr->data != val){
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = ptr->next;
    free(ptr);
    return start;
}

struct node *delete_bef(struct node *start){
    cout<<"Enter the value after which the number is to be deleted: "<<endl;
    int val;
    cin>>val;
    struct node *ptr, *preptr;
    ptr = start;

    while(ptr->next->data != val){
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = ptr->next;
    free(ptr);
    return start;
}

struct node *delete_list(struct node *start){
    struct node *ptr;
    if(start != NULL){
        ptr = start;
        while(ptr != NULL){
            cout<<ptr->data<<" is deleted!"<<endl;
            start = delete_beg(start);
            ptr = start;
        }
    }
    return start;
}

struct node *sort_list(struct node *start){
    struct node *ptr1, *ptr2;
    int temp;
    ptr1 = start;
    while(ptr1->next != NULL){
        ptr2 = ptr1->next;
        while(ptr2 != NULL){
            if(ptr1->data > ptr2->data){
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
}

struct node *display(struct node *start){
    struct node *ptr;
    if(start != NULL){
        ptr = start;
        while(ptr != NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
    return start; 
}

struct node *search(struct node *start){
    struct node *ptr;
    ptr = start;

    cout<<"Enter the value to be searched: "<<endl;
    int val;
    cin>>val; 
    int count = 1;

    while(ptr->data != val){
        count++;
        ptr = ptr->next;
    }
    
    if(ptr != NULL)
        cout<<val<<" found at position "<<count<<" !"<<endl;
    else
        cout<<"Value not found!!"<<endl;
    
    return start;  
}

struct node *start = NULL;

int main(){
    int c;
    do{
    cout<<"Enter Option: ";
    cout<<"1. Create"<<endl
        <<"2. Insert Beg"<<endl
        <<"3. Insert End"<<endl
        <<"4. Insert bef"<<endl
        <<"5. Insert aft"<<endl
        <<"6. Delete Beg"<<endl
        <<"7. Delete End"<<endl
        <<"8. Delete bef"<<endl
        <<"9. Delete aft"<<endl
        <<"10. Delete List"<<endl
        <<"11. Display"<<endl
        <<"12. Sort"<<endl
        <<"13. Search"<<endl
        <<"14. Exit"<<endl;

    cin>>c;
    switch(c){
        case 1: start = create(start);
                cout<<"Linked List Created!!"<<endl;
                break;
        case 2: start = insert_beg(start);
                break;
        case 3: start = insert_end(start);
                break;
        case 4: start = insert_bef(start);
                break;
        case 5: start = insert_after(start);
                break;
        case 6: start = delete_beg(start);
                break;
        case 7: start = delete_end(start);
                break;
        case 8: start = delete_bef(start);
                break;
        case 9: start = delete_aft(start);
                break;
        case 10: start = delete_list(start);
                break;
        case 11: start = display(start);
                break;
        case 12: start = sort_list(start);
                break;
        case 13: start = search(start);
                break;
    }
    }while(c <= 14);    

    return 0;
}