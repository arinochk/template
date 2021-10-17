// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <vector>
// Task 4.
void remove_negative(std::vector<int>& input) {
    int s = 0;
    unsigned long i = 0;
    while (s != 1 && i < input.size()){
      if (input[i] < 0) {
        s++;
        input.erase(input.begin() + i);
      }
      i++;
    }
}

void remove_last_even(std::vector<int>& input) {
  int s = 0;
  unsigned long i = input.size();
  while (s != 1 && i == 0){
    if (input[i] % 2 == 0) {
      s++;
      input.erase(input.begin() + i);
    }
    i--;
  }
}
