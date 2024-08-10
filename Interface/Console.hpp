#include "../Core/DTO/Character.hpp"

#ifndef CONSOLE_H
#define CONSOLE_H

namespace Interface {
using namespace Core;
class Console

{
 public:
  char ask(char &action);

 private:
  char process(char &action);

  void createCharacter(DTO::CHARACTER &character);

 public:
  void print(DTO::CHARACTER character);
};
}  // namespace Interface

#endif
