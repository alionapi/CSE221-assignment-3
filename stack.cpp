#include "stack.h"
#include "container_exception.h"
Stack::Stack(int size) : capacity(size), top_index(-1) {
    data = new std::string[capacity];
}
Stack::~Stack() {
    delete[] data;
}
bool Stack::empty() const {
    if (top_index < 0) return true;
    return false;
}
const std::string &Stack::top() const {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    return data[top_index];
}
void Stack::push(const std::string &e) {
    if (top_index+1 >= capacity) {
        throw ContainerOverflow("Container Overflow");
    }
    else {
        top_index++;
        data[top_index] = e;
    }
}
void Stack::pop() {
    if (empty()) {
        throw ContainerEmpty("Container is empty");
    }
    top_index--;
}
int Stack::size() const {
    return top_index+1;
}