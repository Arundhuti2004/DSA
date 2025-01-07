#include<iostream>
using namespace std;
    struct Node{
    public:
        int data;
        Node* next;

        Node(int val) : data(val),next(nullptr){} // initilize linkedlist
    };
    Node* Array_to_linkedlist(int arr[] , int size){
        if(size == 0) return nullptr;
        Node* head = new Node(arr[0]);
        Node* curr = head;

        for(int i = 1  ; i < size ;i++){
           curr->next = new Node(arr[i]);
           curr = curr->next;

        }
        return head;
    }

    void traversal(Node* head){
        Node* curr = head;
        while(curr != nullptr){
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << "nullptr" << endl;
    }

int main(){

    int arr[] = {33 , 90 , 66 , 50 , 100};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* head = Array_to_linkedlist(arr , size);
    traversal(head);
    return 0;
}