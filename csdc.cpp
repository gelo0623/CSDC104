struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertFront(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    // ??? — what two lines connect newNode into the list and update head?
}

void deleteFront() {
    // ??? — what do you check first?
    // then: how do you grab the old head, move head forward, and free the old one?
}
