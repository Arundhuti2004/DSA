#include <iostream>
#include<vector>
using namespace std;

struct Node {
public:
    int data;
    Node* next;
public:
    Node(int data1 ,Node* next1){
        data = data1;
        next = next1;
    }

};
int main(){

    vector<int>arr = {10 ,20 ,30 ,40 ,50};
    Node* y1 = new Node(arr[0] , nullptr);
    Node* y2 = new Node(arr[1] , nullptr);
    Node* y3 = new Node(arr[2] , nullptr);
    Node* y4 = new Node(arr[3] , nullptr);
    Node* y5 = new Node(arr[4] , nullptr);

    y1->next = y2;
    y2->next = y3;
    y3->next = y4;
    y4->next = y5;

    Node* curr = y1;
    while(curr != nullptr){
        cout << curr->data << endl;
        curr = curr->next;
    }
    
    
    return 0;
}
