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

void insertionBeforeGivenNode(Node* &head ,int nodeData, int value){
    Node* newnode = new Node(value);
    Node* curr = head;
    if (head == nullptr)
    {
       cout << "Nodedata is not exist";
    }
    if(head->data = nodeData){
        newnode->next = head;
        head = newnode;
        return;
    }

    while(curr->next->data != nodeData){
        curr= curr->next;
    }
  
    newnode->next = curr->next;
    curr->next = newnode;
    

    
    
   
}


int main(){
    vector<int>v = {1 ,9 ,5 ,6 ,7};
    int value , nodeData;
    cout << "Enter the value : " ;
      cin >> value;
    cout << "Enter the nodedata :";
  
    cin >> nodeData;


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

   insertionBeforeGivenNode(head , nodeData ,value);

    curr = head;
    cout << "after delete : ";
    while(curr != nullptr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "nullptr" ;




    return 0;
}