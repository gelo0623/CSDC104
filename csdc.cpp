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

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertFront(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;  // <- I filled this in. This is the actual answer to (a) vs (b) above.
}

void deleteFront() {
    if (head == nullptr) {
        cout << "THE LIST IS ALREADY EMPTY" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}
