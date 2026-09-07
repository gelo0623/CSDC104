#include <iostream>

using namespace std;



struct Node {
    int data; //actuaL DATA/value that will be stored
    Node* next; //Link that lets know where to move next// pointer to another
};





int main() {
    
    Node* head = NULL;
    
    // inserting 8
    Node* newPtr = new Node;
    newPtr->data = 8;
    newPtr->next = NULL;
    head = newPtr;
    
//adding 24 at beginning
    newPtr = new Node;
    newPtr->data = 24;
    newPtr->next = head;
    head = newPtr;    
    
    cout << head->data <<endl;
    cout << head->next->data << endl;
    
    //deleting the first node
   


 return 0;   
}













