// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <vector>
using namespace std;

// Task 1.
void multi_2(std::vector<int>& input) {
   for (unsigned long i = 0; i < input.size(); i++){
     input[i]=input[i] * 2;
   }
}

void reduce_a(std::vector<int>& input, int a) {
  for (unsigned long i = 0; i < input.size(); i++){
    input[i]=input[i] - a;
  }
}

void div_on_first(std::vector<int>& input) {
  for (unsigned long i = 0; i < input.size(); i++){
    input[i]=input[i] / input[0];
  }
}
