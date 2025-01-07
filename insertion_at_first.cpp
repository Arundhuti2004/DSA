#include<iostream>
#include<vector>
struct Node{
public:
    int data;
    Node* next;
public:
    Node(int data1 ){
        data = data1;
        next = nullptr;
        
    }


};

void insertionAtFirst(Node* &head , int value){
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
    
   
}

using namespace std;
int main(){
    vector<int>v = {1 ,9 ,5 ,6 ,7};
    int value;
    cout << "Enter the value : ";
    cin >> value;


    Node* head = new Node(v[0] );
    Node* node1 = new Node(v[1] );
    Node* node2 = new Node(v[2] );
    Node* node3 = new Node(v[3] );
    Node* node4 = new Node(v[4] );


    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* curr = head;

    cout << "before delete : ";
    while(curr != nullptr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "nullptr" << endl;

   insertionAtFirst(head , value);

    curr = head;
    cout << "after delete : ";
    while(curr != nullptr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "nullptr" ;




    return 0;
}