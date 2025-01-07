#include<iostream>
using namespace std;
struct Node {
    public :
        int data;
        Node* next;

    public:
        Node(int val):data(val),next(nullptr){}
        
       
    
    
};

void printLength(Node* head){
    Node* curr = head;
    int length = 0;
    while(curr != nullptr){
        cout << curr->data << "->";
        length++;
        curr = curr->next;
    }
    cout << "nullptr" << endl ;
    cout << length << endl;
}

Node* array_to_linkedlist(int arr[] , int size){
    if(size <= 0)
        return nullptr;
    
   
        Node* head = new Node(arr[0]);
        Node* curr = head;
        for(int i = 1 ; i < size ; i++){
             curr->next = new Node(arr[i]);
             curr = curr->next;

        }

    
    return head;
}



int main(){
    
   int arr[] = {33 , 90 , 66 , 50 , 100};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* head = array_to_linkedlist(arr ,n);
    printLength(head);


    


    return 0;
}