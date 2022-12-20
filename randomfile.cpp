#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  // Seed the random number generator with the current time
  srand(time(0));

  // Generate a random number between 1 and 100
  int randomNumber = rand() % 100 + 1;

  std::cout << "Your random number is: " << randomNumber << std::endl;
  return 0;
}
