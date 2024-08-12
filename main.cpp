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
    char response = console.ask(action);

    if (response == 'q') {
      break;
    } else if (response == 'h') {
    }
  }

  return 0;
}
