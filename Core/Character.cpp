#include "Character.hpp"

#include <iostream>
#include <string>

namespace Core {
using namespace std;

DTO::CHARACTER Character::toDTO() {
  DTO::CHARACTER dto;

  dto.name = name;
  dto.age = age;
  dto.genre = genre;

  return dto;
}
}  // namespace Core
