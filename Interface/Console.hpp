#include "../Core/DTO/Character.hpp"

#ifndef CONSOLE_H
#define CONSOLE_H

namespace Interface {
using namespace Core;
class Console

{
 public:
  void ask(DTO::CHARACTER &character);

 public:
  void print(DTO::CHARACTER character);
};
}  // namespace Interface

#endif
