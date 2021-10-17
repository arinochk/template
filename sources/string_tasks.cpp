// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <string>
// Task 5.
bool name_is_even(const std::string& name) {
    if (name.size() % 2 == 0){
      return true;
    }else{
      return false;
    }
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
   if (name_one.size() > name_two.size()){
     return true;
   }else{
     return false;
   }
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
    // Нахождение наибольшего
    if (name_one.size() > name_two.size() && name_one.size() > name_three.size()){
      the_longest = name_one;
    } else if (name_two.size() > name_one.size() && name_two.size() > name_three.size()){
      the_longest = name_two;
    } else {
      the_longest = name_three;
    }
    // Нахождение наименьшего
    if (name_one.size() < name_two.size() && name_one.size() < name_three.size()){
      the_shortest = name_one;
    } else if (name_two.size() < name_one.size() && name_two.size() < name_three.size()){
      the_shortest = name_two;
    } else {
      the_shortest = name_three;
    }
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
    std :: string s = word;
    for (int i = m+1; i < n; i ++){
      if(s[i-1] != s[i]){
        s.erase(i-1, 1);
      }
    }
    return s;
}

// Task 9.
void add_stars(std::string& word) {
  for (unsigned long i = 0; i < word.size(); i++){
    word.push_back('*');
  }
}

// Task 10.
int percent_of_a(const std::string& word) {
    int s = 0;
    for (unsigned long i = 0; i < word.size(); i++){
      if(word[i] == 'a'){
        s++;
      }
    }
    return s / word.size() * 100;
}

// Task 11.
std::string replace_can(const std::string& new_word) {
    unsigned long h = 0;
    std:: string s = new_word;
    for(int i = 0; i < 6; i++){
      h = s.find("can",  h);
      s.replace(h, 3, "new_word");
    }
    return s;
}