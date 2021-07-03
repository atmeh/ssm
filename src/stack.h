#ifndef STACK_H
#define STACK_H
class stack {
  int top;
  public:
    int s[100];
    stack() {top = -1;};
    int push(int z);
    int pop();
    int gettop();
    int getsecond();
};
#endif //STACK_H
