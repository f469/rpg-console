#include "../Core/DTO/Character.hpp"

#ifndef CONSOLE_H
#define CONSOLE_H

namespace Interface {
using namespace Core;
class Console

{
 public:
 public:
  void start(DTO::CHARACTER &hero);

  char ask(char &action);

 private:
  char process(char action);

  void createCharacter(DTO::CHARACTER &character);

  void printHelp();

  void printMenu();
};
}  // namespace Interface

#endif
