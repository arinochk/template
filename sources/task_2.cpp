// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <vector>
// Task 2.
int sum(const std::vector<int>& input) {
    auto sum = 0;
    for (unsigned long i = 0; i < input.size(); i++){
      sum += input[i];
    }
    return sum;
}

int square_sum(const std::vector<int>& input) {
  auto sum = 0;
  for (unsigned long i = 0; i < input.size(); i++){
    sum += input[i] ^ 2;
  }
  return sum;
}

int sum_six(const std::vector<int>& input) {
  auto sum = 0;
  for (unsigned long i = 0; i < 5; i++){
    sum += input[i];
  }
  return sum;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
  auto sum = 0;
  for (auto i = k1; i <= k2; i++){
    sum += input[i];
  }
  return sum;
}

int mean(const std::vector<int>& input) {
  auto sum = 0;
  for (unsigned long i = 0; i < input.size(); i++){
    sum += input[i];
  }
  return sum / input.size();
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
  auto sum = 0;
  for (auto i = s1; i <= s2; i++){
    sum += input[i];
  }
  return sum / (s2-s1+1);
}
