#include <iostream>
using namespace std;

enum Level {
  LOW,     // 0
  MEDIUM,  // 1
  HIGH,    // 2
};

int main() {
  Level myVar = LOW;

  switch (myVar) {
    case LOW:
      cout << "Low Level";
      break;
    case MEDIUM:
      cout << "Medium Level";
      break;
    case HIGH:
      cout << "High Level";
      break;
    default:
      cout << "Unknown Level";
  }

  return 0;
}
