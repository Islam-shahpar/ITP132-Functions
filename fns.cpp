#include <iostream>
using namespace std;

string ask_first_name(){
  string first_name;
  cout << "Please enter your first name: " << endl;
  getline(cin,first_name);
  return first_name;
}

string ask_last_name(){
  string last_name;
  cout << "Please enter your first name: " << endl;
  getline(cin,last_name);
  return last_name;
}

string join_names(string first_name, string last_name){
  string joined_name;
  joined_name = first_name + " " + last_name;
  return joined_name;
}

void print_name(string full_name){
  cout << "Your full name is: " << full_name << endl;
}