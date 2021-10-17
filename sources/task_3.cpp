// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
    int h;
    for (int i = 0; i < 3; i++){
      h = input[i];
      input[i] = input[20 - 3 + i];
      input[17 + i] = h;
    }
}
