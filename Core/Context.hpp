#include <string>

#include "./DTO/Context.hpp"

#ifndef CONTEXT_H
#define CONTEXT_H

namespace Core {
using namespace std;
class Context {
 private:
  string name{"name"};

 public:
  Context(DTO::CONTEXT context) { name = context.name; }

 public:
  DTO::CONTEXT toDTO();
};
}  // namespace Core

#endif