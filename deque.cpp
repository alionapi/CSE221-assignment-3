#include "deque.h"
#include "container_exception.h"
#include "stack.h"

bool Deque::empty() const {
    if (list.empty()) return true;
    return false;
}
int Deque::size() const {
    return list.size();
}
const std::string &Deque::front() const {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    return list.front();
}
const std::string &Deque::back() const {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    return list.back();
}
void Deque::push_front(const std::string &e) {
    list.add_front(e);
}
void Deque::push_back(const std::string &e) {
    list.add_back(e);
}
void Deque::pop_front() {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    list.remove_front();
}
void Deque::pop_back() {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    list.remove_back();
}
void Deque::reverse() {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    Stack reverse_stack(size());
    while (!empty()) {
        reverse_stack.push(front());
        pop_front();
    }
    while (!reverse_stack.empty()) {
        push_back(reverse_stack.top());
        reverse_stack.pop();
    }
}