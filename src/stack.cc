#include <iostream>

#include "stack.h"

int stack::push(int z) {
  if (top >= 99) {
    std::cout << "overflow error\n";
    return 1;
  }
  else {
    s[++top] = z;
    return 0;
  }
}

int stack::pop() {
  if (top < 0) {
    std::cout << "underflow error\n";
    return 1;
  }
  else {
    int temp = s[top--];
    return 0;
  }
}

int stack::gettop() {
  if (top < 0) {
    std::cout << "empty stack\n";
    return 1;
  }
  else {
  return s[top];
  }
}

int stack::getsecond() {
  return s[(top-1)];
}
