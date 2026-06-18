#include "doubly_linked_list.h"
#include "container_exception.h"
DoublyLinkedList::DoublyLinkedList() {
    header = new Node;
    trailer = new Node;
    header->next = trailer;
    trailer->prev = header;
}
DoublyLinkedList::~DoublyLinkedList() {
    while (!empty()) {remove_front();}
    delete header;
    delete trailer;
}
bool DoublyLinkedList::empty() const {
    if (header->next == trailer) {
        return true;
    } return false;
}
const std::string &DoublyLinkedList::front() const {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    else {
        return header->next->ele;
    }
}
const std::string &DoublyLinkedList::back() const {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    else {
        return trailer->prev->ele;
    }
}
void DoublyLinkedList::add_front(const std::string &e) {
    Node* n_new = new Node();
    n_new->ele = e;
    n_new->prev = header;
    n_new->next = header->next;
    header->next->prev = n_new;
    header->next = n_new;
}
void DoublyLinkedList::add_back(const std::string &e) {
    Node* n_new = new Node();
    n_new->ele= e;
    n_new->prev = trailer->prev;
    n_new-> next = trailer;
    trailer->prev->next = n_new;
    trailer->prev = n_new;
}
void DoublyLinkedList::remove_front() {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    else {
        Node* n_old = header->next;
        header->next = n_old->next;
        n_old->next->prev = header;
        delete n_old;
    }
}
void DoublyLinkedList::remove_back() {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    else {
        Node* n_old = trailer->prev;
        trailer->prev = n_old->prev;
        n_old->prev->next = trailer;
        delete n_old;
    }
}
int DoublyLinkedList::size() const {
    int c = 0;
    Node* curr = header->next;
    while (curr != trailer) {
        curr = curr->next;
        c++;
    }
    return c;
}