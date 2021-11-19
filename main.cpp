#include <iostream>
#include "fns.hpp"
using namespace std;

int main(){
  
  string first_name, last_name, full_name;
  
  first_name = ask_first_name();

  last_name = ask_last_name();

  full_name = join_names(first_name, last_name);

  print_name(full_name);


}