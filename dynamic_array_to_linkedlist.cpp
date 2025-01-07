#include <iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    Node(int val):data(val) , next(nullptr){}
};

Node* array_to_linkedlist(int arr[] , int n){
    if(n == 0 ) return nullptr;

    Node* head = new Node(arr[0]);
    Node* curr = head;
    for(int i = 1  ;i < n ; i++){
        curr->next = new Node(arr[i]);
        curr=curr->next;
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
    int n ;
    cout << "Enter the value of n :";
    cin >> n ; 
    int arr[n];
    cout << "Enter the value of element :";
    for(int  i  = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    Node* head = array_to_linkedlist(arr,n);
    traversal(head);
    return 0;
}