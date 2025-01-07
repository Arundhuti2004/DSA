#include<iostream>
#include<vector>
using namespace std;
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

void insertionSpecificPosition(Node* &head ,int pos, int value){
    Node* newnode = new Node(value);
    Node* curr = head;
    
    if (pos < 1) {
        cout << "Invalid position. Must be greater than or equal to 1.\n";
        delete newnode;
        return;
    }

    if(pos == 1){
        newnode->next = head;
        head = newnode;
        return;
    }
    
     curr = head;
    for (int i = 1; i < pos - 1; i++) {
         curr = curr->next;
    }
    
    if(curr == nullptr ){
        cout << "length is exist";
    }

    newnode->next = curr->next;
    curr->next = newnode;
    

    
    
   
}


int main(){
    vector<int>v = {1 ,9 ,5 ,6 ,7};
    int pos , value;
    cout << "Enter the pos : " ;
      cin >> pos;
    cout << "Enter the value :";
  
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

   insertionSpecificPosition(head  ,pos , value);

    curr = head;
    cout << "after delete : ";
    while(curr != nullptr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "nullptr" ;




    return 0;
}