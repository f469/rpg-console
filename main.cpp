#include "./Core/Character.hpp"
#include "./Interface/Console.hpp"

using namespace Core;
using namespace Interface;

int main() {
  char action{};
  Console console = Console();

  DTO::CHARACTER hero = DTO::CHARACTER();
  console.start(hero);

  while (1) {
    console.printContext();
    char response = console.ask(action);

    if (response == 'q') {
      break;
    }
  }

  return 0;
}
