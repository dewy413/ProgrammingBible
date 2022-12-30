#include <iostream>
#include <string>

using namespace std;

struct Node {
    int data;
    Node *link;
};



class BasicLinkedList {
public:
    Node *head;
    int size;

    void insert(int number) {
        if(head == nullptr) {
            Node *tempNode = new Node;
            tempNode->data = number;
            head = tempNode;
            size++;
        } else {
            Node *tempNode = new Node;
            tempNode->data = number;
            tempNode->link = head;
            head = tempNode;
            size++;
        }
    }

    void search(int number) const {
        Node *current = head;

        for(int i = 0; i < size; i++) {
            if(current->data == number) {
                cout << number << " found at Node " << i << endl;
                break;
            } else {
                current = current->link;
            }
        }
    }

    void remove(int number) {
        Node *current;
        Node *prev;
        if(head->data == number) {
            head = head->link;
        } else {
            prev = head;
            current = head->link;
            for(int i = 1; i < size; i++) {
                if(current->data == number) {
                    prev->link = current->link;
                    cout << current->data << " was found at Node " << i << endl;
                    size--;
                    break;
                } else {
                    prev = current;
                    current = current->link;
                }
            }
        }
    }

    void print() const {
        Node *current = head;
        for(int i = 0; i < size; i++) {
            cout << current->data << endl;
            current = current->link;
        }
    }

};




int main() {
    BasicLinkedList myList;

    for(int i = 0; i < 10; i++) {
        myList.insert(i);
    }


    myList.remove(6);

    myList.print();

}