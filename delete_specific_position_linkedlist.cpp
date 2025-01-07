#include<iostream>
#include<vector>
using namespace std;
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

void deleteSpecificNode(Node* &head , int pos){
    if(head == nullptr || pos < 1){
        cout << "invaild position";
    }
    if(pos == 1){
        Node* curr = head;
        head = head->next;
        delete curr;
        return;
    }
    Node* curr = head;
    for(int i = 1 ; i < pos -1 ; i++){
        curr = curr->next;
    }
    
    if(curr == nullptr || curr->next == nullptr){
        cout << "length is exist";
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;


    
   
}

using namespace std;
int main(){
    vector<int>v = {1 ,9 ,5 ,6 ,7};
    int pos;
    cout << "Enter the specific position : ";
    cin >> pos ; 


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

    deleteSpecificNode(head , pos);

    curr = head;
    cout << "after delete : ";
    while(curr != nullptr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "nullptr" ;




    return 0;
}