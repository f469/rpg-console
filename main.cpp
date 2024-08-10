#include "./Core/Character.hpp"
#include "./Interface/Console.hpp"

using namespace Core;
using namespace Interface;

int main(int argc, char **argv) {
  DTO::CHARACTER characterDTO;

  Console console = Console();

  console.ask(characterDTO);

  Character character = Character(characterDTO);
  console.print(character.toDTO());

  return 0;
}
