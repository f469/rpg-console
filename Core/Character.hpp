#include <string>

#include "./DTO/Character.hpp"

#ifndef CHARACTER_H
#define CHARACTER_H

namespace Core {
using namespace std;
class Character {
private:
  string name{"name"};
  string genre{"genre"};
  int age{0};

public:
  Character(DTO::CHARACTER character) {
    name = character.name;
    genre = character.genre;
    age = character.age;
  }

public:
  DTO::CHARACTER toDTO();
};
} // namespace Core

#endif
