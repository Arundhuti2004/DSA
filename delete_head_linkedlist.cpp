#include<iostream>
#include<vector>
struct Node{
public:
    int data;
    Node* next;
public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }


};

void deleteHead(Node* &head){
    if(head == nullptr){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
   
}

using namespace std;
int main(){
    vector<int>v = {1 ,9 ,5 ,6 ,7};

    Node* head = new Node(v[0] , nullptr);
    Node* node1 = new Node(v[1] , nullptr);
    Node* node2 = new Node(v[2] , nullptr);
    Node* node3 = new Node(v[3] , nullptr);
    Node* node4 = new Node(v[4] , nullptr);


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

    deleteHead(head);

    curr = head;
    cout << "after delete : ";
    while(curr != nullptr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "nullptr" ;




    return 0;
}