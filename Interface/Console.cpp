#include "./Console.hpp"

#include <iostream>

#include "../Core/DTO/Character.hpp"

namespace Interface {
using namespace std;
using namespace Core;

char Console::ask(char &action) {
  cout << "What do you do ?" << endl;
  cin >> action;

  if (action == 'q') {
    return action;
  }

  return Console::process(action);
}

char Console::process(char &action) { return action; }

void Console::createCharacter(DTO::CHARACTER &character) {
  cout << "Name : ";
  cin >> character.name;
}

void Console::print(DTO::CHARACTER character) {
  cout << "=========" << endl;
  cout << "Name : " << character.name << endl;
}
}  // namespace Interface
