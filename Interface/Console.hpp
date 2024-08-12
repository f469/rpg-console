#include "../Core/DTO/Character.hpp"

#ifndef CONSOLE_H
#define CONSOLE_H

namespace Interface {
using namespace Core;
class Console

{
 public:
  void start(DTO::CHARACTER &hero);

  void printContext();

  char ask(char &action);

  void printHelp();

  void printMenu();

 private:
  char process(char action);

  void createCharacter(DTO::CHARACTER &character);
};
}  // namespace Interface

#endif
