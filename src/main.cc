#include <iostream>
#include <string>
#include <vector>

#include "stack.h"
#include "token.h"

int main() {
  std::string command;
  std::vector<std::string> commands;
  class stack st;
  int r, a, b;
  for (;;) {
    std::cout << ">";
    std::getline(std::cin, command);
    split(command, commands);
    if (commands[0] == "quit") break;
    else if (commands[0] == "hi") std::cout << "hello\n";
    else if (commands[0] == "push"){
      r = st.push(stoi(commands[1]));
      if (r == 0) std::cout << "Pushed " << commands[1] << "\n";
    }
    else if (commands[0] == "pop"){
      r = st.pop();
      if (r == 0) std::cout << "Popped\n";
    }
    else if (commands[0] == "log"){
      r = st.gettop();
      std::cout << r << "\n";
    }
    else if (commands[0] == "add"){
      a = st.gettop();
      b = st.getsecond();
      st.pop();
      st.pop();
      st.push(a+b);
    }
    else if (commands[0] == "sub"){
      a = st.gettop();
      b = st.getsecond();
      st.pop();
      st.pop();
      st.push(a-b);
    }
    else if (commands[0] == "mul") {
      a = st.gettop();
      b = st.getsecond();
      st.pop();
      st.pop();
      st.push(a*b);
    }
    else if (commands[0] == "div") {
      a = st.gettop();
      b = st.getsecond();
      st.pop();
      st.pop();
      st.push(a/b);
    }
    else if (commands[0] == "and") {
      a = st.gettop();
      b = st.getsecond();
      st.pop();
      st.pop();
      st.push(a&b);
    }
    else if (commands[0] == "or"){
      a = st.gettop();
      b = st.getsecond();
      st.pop();
      st.pop();
      st.push(a|b);
    }
    else if (commands[0] == "not"){
      a = st.gettop();
      st.pop();
      st.push(~a);
    }
    else if (commands[0] == ""
    else std::cout << "Unknown command, retry\n";
    commands.clear();
  }
  return 0;
}
