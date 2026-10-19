#include <iostream>
#include <map>
using namespace std;

int main() {
  // Create a map that will store the name and age of different people
  map<string, int> people = { 
    {"John", 32}, 
    {"Adele", 45}, 
    {"Bo", 29} 
  };

  // Get the value associated with the key "John"
  cout << "John is: " << people["John"] << "\n"; 

  // Get the value associated with the key "Adele"
  cout << "Adele is: " << people["Adele"] << "\n";

  return 0;
}