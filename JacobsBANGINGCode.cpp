#include <iostream>


struct Node {
    int data;
    Node *next = nullptr;
};

typedef Node* NodePtr;

int main () {
    NodePtr head = new Node{0};

    NodePtr tail = head;

    for (int i=1; i <=10; i++) {
        tail->next = new Node{i};
        tail = tail->next;
    }

    NodePtr tmp = head;

    while (tmp != nullptr) {
        if (tmp->next->data == 7){
            NodePtr new_next = tmp->next->next;
            delete tmp->next;
            tmp->next = new_next;
            break;
        }

        tmp = tmp->next;
    }

    NodePtr tmp2 = head;

    while (tmp2 != nullptr){
        std::cout<<tmp2->data<<std::endl;
        tmp2 = tmp2->next;
    }

    return 0;
}


