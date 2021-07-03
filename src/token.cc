#include <string>
#include <vector>

#include "token.h"

void split(std::string s, std::vector<std::string> &v) {
  std::string temp = "";
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
      v.push_back(temp);
      temp = "";
    }
    else {
      temp.push_back(s[i]);
    }
  }
  v.push_back(temp);
}
