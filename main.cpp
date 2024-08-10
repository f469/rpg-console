#include "./Core/Character.hpp"
#include "./Interface/Console.hpp"

using namespace Core;
using namespace Interface;

int main(int argc, char **argv) {
  char action{};
  Console console = Console();

  while (1) {
    char response = console.ask(action);

    if (response == 'q') {
      break;
    }
  }

  return 0;
}
