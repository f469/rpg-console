#include "Character.hpp"

#include <iostream>
#include <string>

namespace Core {
using namespace std;

DTO::CHARACTER Character::toDTO() {
  DTO::CHARACTER dto;

  dto.name = name;

  return dto;
}
}  // namespace Core
