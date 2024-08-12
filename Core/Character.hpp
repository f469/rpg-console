#include <string>

#include "./DTO/Character.hpp"

#ifndef CHARACTER_H
#define CHARACTER_H

namespace Core {
using namespace std;
class Character {
 private:
  string name{"name"};

 public:
  Character(DTO::CHARACTER character) { name = character.name; }

 public:
  DTO::CHARACTER toDTO();
};
}  // namespace Core

#endif
